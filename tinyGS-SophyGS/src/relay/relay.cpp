//
// relay.cpp - very simple class to control a relay connected to an IO pin
//
// based on https://github.com/rafaelnsantos/Relay
//
// added: relayDelay(...)  - ve3gtc - 2021-05-15
//

#include "Relay.h"

Relay::Relay(){}

Relay::Relay(int p, bool isNormallyOpen){
	pin = p;
	normallyOpen = isNormallyOpen;
}

void Relay::begin(){
	pinMode(pin, OUTPUT);
}

bool Relay::getState(){
	if (normallyOpen){
		return !state;
	}
	else {
		return state;
	}
}
void Relay::turnOn(){
	if (normallyOpen){
		if (state == !true) return;
		state = !true;
	} else {
		if (state == true) return;
		state = true;
	}
	digitalWrite(pin, state);
}
void Relay::turnOff(){
	if (normallyOpen){
		if (state == !false) return;
		state = !false;
	} else {
		if (state == false) return;
		state = false;
	}
	digitalWrite(pin, state);
}

// - ve3gtc - 2021-05-24

void Relay::relayDelay(int delayMillis) {
  int previousMillis = millis();

  while ( millis() <= previousMillis + delayMillis );

}
