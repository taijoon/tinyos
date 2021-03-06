// $Id: DipTrickleMilliP.nc,v 1.1 2008/01/03 21:30:35 kaisenl Exp $
/*
 * "Copyright (c) 2006 Stanford University. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and
 * its documentation for any purpose, without fee, and without written
 * agreement is hereby granted, provided that the above copyright
 * notice, the following two paragraphs and the author appear in all
 * copies of this software.
 * 
 * IN NO EVENT SHALL STANFORD UNIVERSITY BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 * ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN
 * IF STANFORD UNIVERSITY HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 * 
 * STANFORD UNIVERSITY SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE
 * PROVIDED HEREUNDER IS ON AN "AS IS" BASIS, AND STANFORD UNIVERSITY
 * HAS NO OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES,
 * ENHANCEMENTS, OR MODIFICATIONS."
 */

/*
 * Module that provides a service instance of trickle timers. For
 * details on the working of the parameters, please refer to Levis et
 * al., "A Self-Regulating Algorithm for Code Maintenance and
 * Propagation in Wireless Sensor Networks," NSDI 2004.
 *
 * @param l Lower bound of the time period in seconds.
 * @param h Upper bound of the time period in seconds.
 * @param k Redundancy constant.
 * @param count How many timers to provide.
 *
 * @author Philip Levis
 * @author Gilman Tolle
 * @date   Jan 7 2006
 */ 

#include <Timer.h>
#include <Dip.h>

module DipTrickleMilliP {
  provides {
    interface Init;
    interface DipTrickleTimer as TrickleTimer;
  }
  uses {
    interface Timer<TMilli> as PeriodicIntervalTimer;
    interface Timer<TMilli> as SingleEventTimer;
    interface Random;
    interface Leds;
  }
}
implementation {

  uint32_t period;

  command error_t Init.init() {
    period = DIP_TAU_HIGH;
    return SUCCESS;
  }

  /**
   * Start a trickle timer. Reset the counter to 0.
   */
  command error_t TrickleTimer.start() {
    call PeriodicIntervalTimer.startOneShot(period);
    dbg("DipTrickleMilliP",
	"Starting trickle timer @ %s\n", sim_time_string());
		//call Leds.led0Toggle();
    return SUCCESS;
  }

  /**
   * Stop the trickle timer. This call sets the timer period to H.
   */
  command void TrickleTimer.stop() {
    call PeriodicIntervalTimer.stop();
    dbg("DipTrickleMilliP",
	"Stopping trickle timer @ %s\n", sim_time_string());
  }

  /**
   * Reset the timer period to L. If called while the timer is running,
   * then a new interval (of length L) begins immediately.
   */
  command void TrickleTimer.reset() {
    period = DIP_TAU_LOW;
    call PeriodicIntervalTimer.stop();
    call PeriodicIntervalTimer.startOneShot(period);

    dbg("DipTrickleMilliP",
	"Resetting trickle timer @ %s\n", sim_time_string());
  }

  command void TrickleTimer.maxInterval() {
    period = DIP_TAU_HIGH;
  }

  /**
   * The trickle timer has fired. Signaled if C &gt; K.
   */
  event void PeriodicIntervalTimer.fired() {
    uint32_t dtfire;

    dtfire = (call Random.rand16() % (period / 2)) + (period / 2);
    dbg("DipTrickleMilliP", "Scheduling Trickle event with %u\n", dtfire);
    call SingleEventTimer.startOneShot(dtfire);
    period = signal TrickleTimer.requestWindowSize();
    call PeriodicIntervalTimer.startOneShot(period);
    //call Leds.led0Toggle();
  }

  event void SingleEventTimer.fired() {
    dbg("Trickle", "Firing Trickle Event Timer\n");
    signal TrickleTimer.fired();
  }
}

  
