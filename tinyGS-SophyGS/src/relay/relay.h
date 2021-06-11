//
// Relay.h - very simple class to control a relay connected to an IO pin 
//
// based on https://github.com/rafaelnsantos/Relay
//
// added: relayDelay(...)  - ve3gtc - 2021-05-15
//

#ifndef _RELAY_h
#define _RELAY_h

#define useRelays True

#include "Arduino.h"
  
class Relay
{
 protected:
	 int pin;
	 bool state;
	 bool normallyOpen;

 public:
	 Relay();
	 Relay(int p, bool isNormallyOpen);
	 void begin();
	 bool getState();
	 void turnOn();
	 void turnOff();
	 void relayDelay(int delayMillis);
};

#endif
