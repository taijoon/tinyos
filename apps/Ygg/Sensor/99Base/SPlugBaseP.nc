/*
 */

#include "Timer.h"
#include "AM.h"
#include "../../Yggdrasil.h"

module SPlugBaseP @safe(){
	provides {
		interface BaseControl;
	}
  uses {
    // Interfaces for initialization:
    interface SplitControl as RadioControl;
    interface SplitControl as SerialControl;
    interface StdControl as RoutingControl;
    interface AMPacket;
    
    // Interfaces for communication, multihop and serial:
    interface Send;
    interface Receive as Snoop;
    interface Receive as AckRev;
    interface Receive as BaseRev;
    interface Receive as THRev;
    interface Receive as TH20Rev;
    interface Receive as PIRRev;
    interface Receive as POWRev;
    interface Receive as CO2Rev;
    interface Receive as CO2S100Rev;
    interface Receive as MAXCO2Rev;
    interface Receive as VOCSRev;
    interface Receive as SOLARRev;
    interface Receive as ETYPERev;
    interface Receive as ThermoLoggerRev;
    interface Receive as USRev;
    interface Receive as SPlugRev;
    interface Receive as SPlug2Rev;

    interface Receive as MARKERRev;
    interface Receive as DUMMYRev;

    interface Receive as AMReceive;

    interface AMSend as SerialSend;
    interface CollectionPacket;
    interface RootControl;

    interface Queue<message_t *> as UARTQueue;
    interface Pool<message_t> as UARTMessagePool;

    // Miscalleny:
    interface Timer<TMilli>;
    interface Leds;

    interface StdControl as UartControl;
    interface UartStream;
  }
  uses async command void setAmAddress(am_addr_t a);
}

implementation {
  task void uartSendTask();
  task void baseSendTask();
  message_t*
  receive(int type, message_t* msg, void *payload, uint8_t len);

  uint8_t uartlen;
	uint32_t interval;
  message_t sendbuf;
  message_t uartbuf;
  norace bool sendbusy=FALSE, uartbusy=FALSE; 
  oscilloscope_t local;
	uint32_t timerTick=0;

	command error_t BaseControl.start(base_info_t *nodeInfo){
		memcpy(&local.info, nodeInfo, sizeof(base_info_t));  
		local.info.type = BASE_OSCILLOSCOPE;

    call RootControl.setRoot();
		call setAmAddress(TOS_NODE_ID);

    if (call RadioControl.start() != SUCCESS) {
			;
		}

    if (call RoutingControl.start() != SUCCESS) {
			;
		}

    call UartControl.start();
    // This is how to set yourself as a root to the collection layer:
//    if (local.info.id % 100 == 0){
		//local.channel = CC2420_DEF_CHANNEL;
		//local.gId = TOS_AM_GROUP;
		return SUCCESS;
	}

	command error_t BaseControl.stop(){
    if (call RadioControl.stop() != SUCCESS) {
      ;
		}

    if (call RoutingControl.stop() != SUCCESS) {
      ;
		}
  		
    if (call Timer.isRunning()) call Timer.stop();
		return SUCCESS;
	}

  event void RadioControl.startDone(error_t error) {
    if (error != SUCCESS) {
			call RadioControl.start();
		}
    if (sizeof(local) > call Send.maxPayloadLength())
      ;

    if (call SerialControl.start() != SUCCESS)
      ;
  		
  }

  event void SerialControl.startDone(error_t error) {
    if (error != SUCCESS) {
			call SerialControl.start();
		}
  }

	void setTimer(uint32_t repeat) {
		if(repeat == 0)
			interval = DEFAULT_INTERVAL;
		else
			interval = repeat;
        if (call Timer.isRunning()) call Timer.stop();
	}

	command error_t BaseControl.repeatTimer(uint32_t repeat) {
	  setTimer(repeat);
// To do: should check the effect of Timer
// Wizbridge not working if Timer.startPeriodic called
// jh.kang 20120812 
//#ifdef WIZBRIDGE
//   	  post baseSendTask();
//#else 
	  call Timer.startPeriodic(interval);
//#endif
	  return SUCCESS;	
	}

	command error_t BaseControl.oneShotTimer(uint32_t repeat) {
	  setTimer(repeat);
	  call Timer.startOneShot(interval);
	  return SUCCESS;
	}

  event void RadioControl.stopDone(error_t error) {
	  if(error != SUCCESS) {
	  	call RadioControl.stop();
		}
	}

  event void SerialControl.stopDone(error_t error) {
	  if(error != SUCCESS) {
	  	call SerialControl.stop();
	  }

		call RootControl.setRoot();
		call setAmAddress(TOS_NODE_ID);
	}

  //
  // Only the root will receive messages from this interface; its job
  // is to forward them to the serial uart for processing on the pc
  // connected to the sensor network.
  //

	/* Sensor List */
  event message_t*
  AckRev.receive(message_t* msg, void *payload, uint8_t len) {
		return receive(ACK_OSCILLOSCOPE, msg, payload, len);
	}

  event message_t*
  BaseRev.receive(message_t* msg, void *payload, uint8_t len) {
		return receive(BASE_OSCILLOSCOPE, msg, payload, len);
	}

  event message_t*
  THRev.receive(message_t* msg, void *payload, uint8_t len) {
		return receive(TH_OSCILLOSCOPE, msg, payload, len);
	}

// jh.kang vtt 2014/06
  event message_t*
  TH20Rev.receive(message_t* msg, void *payload, uint8_t len) {
		return receive(TH20_OSCILLOSCOPE, msg, payload, len);
	}

  event message_t*
  PIRRev.receive(message_t* msg, void *payload, uint8_t len) {
		return receive(PIR_OSCILLOSCOPE, msg, payload, len);
	}
  
	event message_t*
  POWRev.receive(message_t* msg, void *payload, uint8_t len) {
		return receive(POW_OSCILLOSCOPE, msg, payload, len);
	}

	event message_t*
  MAXCO2Rev.receive(message_t* msg, void *payload, uint8_t len) {
		return receive(MAXCO2_OSCILLOSCOPE, msg, payload, len);
	}

	event message_t*
  CO2Rev.receive(message_t* msg, void *payload, uint8_t len) {
		return receive(CO2_OSCILLOSCOPE, msg, payload, len);
	}

	event message_t*
  CO2S100Rev.receive(message_t* msg, void *payload, uint8_t len) {
		return receive(CO2S100_OSCILLOSCOPE, msg, payload, len);
	}

	event message_t*
  VOCSRev.receive(message_t* msg, void *payload, uint8_t len) {
		return receive(VOCS_OSCILLOSCOPE, msg, payload, len);
	}
	
	event message_t*
  ETYPERev.receive(message_t* msg, void *payload, uint8_t len) {
		return receive(ETYPE_OSCILLOSCOPE, msg, payload, len);
	}

	event message_t*
  ThermoLoggerRev.receive(message_t* msg, void *payload, uint8_t len) {
		return receive(THERMO_LOGGER_OSCILLOSCOPE, msg, payload, len);
	}

	event message_t*
  USRev.receive(message_t* msg, void *payload, uint8_t len) {
		return receive(US_OSCILLOSCOPE, msg, payload, len);
	}

	event message_t*
  SPlugRev.receive(message_t* msg, void *payload, uint8_t len) {
		return receive(SPLUG_OSCILLOSCOPE, msg, payload, len);
	}

	event message_t*
  SPlug2Rev.receive(message_t* msg, void *payload, uint8_t len) {
		return receive(SPLUG2_OSCILLOSCOPE, msg, payload, len);
	}

	event message_t*
  SOLARRev.receive(message_t* msg, void *payload, uint8_t len) {
		return receive(SOLAR_OSCILLOSCOPE, msg, payload, len);
	}

	event message_t*
  MARKERRev.receive(message_t* msg, void *payload, uint8_t len) {
		return receive(MARKER_OSCILLOSCOPE, msg, payload, len);
	}

	event message_t*
  DUMMYRev.receive(message_t* msg, void *payload, uint8_t len) {
		return receive(DUMMY_OSCILLOSCOPE, msg, payload, len);
	}

	event message_t*
  AMReceive.receive(message_t* msg, void *payload, uint8_t len) {
		return receive(0xff, msg, payload, len);
	}

	char WATT[11] = " 0000.00W\n";
	uint32_t watt = 0;

  message_t*
  receive(int type, message_t* msg, void *payload, uint8_t len) {
		uint8_t* in = NULL;
		uint8_t* out = NULL;
		splug2_oscilloscope_t* o = (splug2_oscilloscope_t*)payload; 
    in = payload;

		local.channel++;

		// filter off differential Group id
		if( call AMPacket.group(msg) != call AMPacket.localGroup())
        return msg;

		if(type == SPLUG_OSCILLOSCOPE || type == SPLUG2_OSCILLOSCOPE){
			call Leds.led2Toggle();
  	  uartlen = sizeof(splug2_oscilloscope_t);
			watt = o->watt;
			//watt = 330;
			WATT[1] = watt / 100000 + 48;
			WATT[2] = (watt % 100000) / 10000 + 48;
			WATT[3] = (watt % 10000) / 1000 + 48;
			WATT[4] = (watt % 1000) / 100 + 48;
			WATT[5] = '.';
			WATT[6] = (watt % 100) / 10 + 48;
			WATT[7] = watt % 10 + 48;
    	call UartStream.send(WATT, 11);
		}
		else{
			call Leds.led0Toggle();
		}
   
    if (uartbusy == FALSE) {
      out = call SerialSend.getPayload(&uartbuf, uartlen);
			if(out == NULL || len != uartlen) {
				return msg;
			}
      else {
				memcpy(out, in, uartlen);
      }
      post uartSendTask();
    } else {
      // The UART is busy; queue up messages and service them when the
      // UART becomes free.
      message_t *newmsg = call UARTMessagePool.get();
      if (newmsg == NULL) {
        // drop the message on the floor if we run out of queue space.
        return msg;
      }

      //Serial port busy, so enqueue.
      out = call SerialSend.getPayload(newmsg, uartlen);
      if (out == NULL) {
				return msg;
      }
      memcpy(out, in, uartlen);

      if (call UARTQueue.enqueue(newmsg) != SUCCESS) {
        // drop the message on the floor and hang if we run out of
        // queue space without running out of queue space first (this
        // should not occur).
        call UARTMessagePool.put(newmsg);
        return msg;
      }
    }
    return msg;
  }

  task void baseSendTask() {
		oscilloscope_t *out;
		uartlen=sizeof(oscilloscope_t);
    if (uartbusy == FALSE) {
      out = (oscilloscope_t *)call SerialSend.getPayload(&uartbuf, uartlen);
			if(out == NULL) {
				return;
			}
      else {
				local.info.count++;
				memcpy(out, &local, uartlen);
      }
      post uartSendTask();
    } else {
      // The UART is busy; queue up messages and service them when the
      // UART becomes free.
      message_t *newmsg = call UARTMessagePool.get();
      if (newmsg == NULL) {
        // drop the message on the floor if we run out of queue space.
        return;
      }

      //Serial port busy, so enqueue.
      out = (oscilloscope_t *)call SerialSend.getPayload(&uartbuf, sizeof(oscilloscope_t));
      if (out == NULL) {
				return;
      }
			memcpy(out, &local, uartlen);

      if (call UARTQueue.enqueue(newmsg) != SUCCESS) {
        // drop the message on the floor and hang if we run out of
        // queue space without running out of queue space first (this
        // should not occur).
        call UARTMessagePool.put(newmsg);
        return;
      }
    }
  }

  task void uartSendTask() {
/*
    if (call SerialSend.send(0xffff, &uartbuf, uartlen) != SUCCESS) {
      ;
    } else {
      uartbusy = TRUE;
    }
		call Leds.led1Toggle();
		local.gId++;
		//call Leds.sent();
*/
  }

  event void SerialSend.sendDone(message_t *msg, error_t error) {
    uartbusy = FALSE;
    if (call UARTQueue.empty() == FALSE) {
      // We just finished a UART send, and the uart queue is
      // non-empty.  Let's start a new one.
      message_t *queuemsg = call UARTQueue.dequeue();
      if (queuemsg == NULL) {
        return;
      }
      memcpy(&uartbuf, queuemsg, sizeof(message_t));
      if (call UARTMessagePool.put(queuemsg) != SUCCESS) {
        return;
      }
      post uartSendTask();
    }
  }

  //
  // Overhearing other traffic in the network.
  //
  event message_t* 
  Snoop.receive(message_t* msg, void* payload, uint8_t len) {
		call Leds.led0Toggle();
    return msg;
  }

  event void Timer.fired() {
		post baseSendTask();
		atomic {
			timerTick++;
#ifdef RESET_TIMER
#warning ############### RESET_TIMER ###############
			if((timerTick * interval) >= 88473600) {
				WDTCTL = 0;
				while(1) { ; }
			}
#endif	
		local.channel = 0;
		local.gId = 0;
		}
  }

  event void Send.sendDone(message_t* msg, error_t error) {
    sendbusy = FALSE;
  }

  async event void UartStream.receivedByte( uint8_t byte ) {
	}

  async event void UartStream.sendDone( uint8_t* buf, uint16_t len, error_t error ) {      
  }

  async event void UartStream.receiveDone( uint8_t* buf, uint16_t len, error_t error ) {
  }
}
