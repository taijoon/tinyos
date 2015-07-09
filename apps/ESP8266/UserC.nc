
module UserAppC @safe() 
{
	uses interface Boot;
	uses interface Leds;
  uses interface Timer<TMilli> as Timer;
	uses interface ESP8266;
}
implementation{

  event void Boot.booted(){
		call ESP8266.init();
	}

	event void Timer.fired(){
	}

	event void ESP8266.initDone(){
		call ESP8266.mode(1);
	}

}
