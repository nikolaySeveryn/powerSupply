/*
 * PhisicalAnalogPin.cpp
 *
 *  Created on: Sep 28, 2017
 *      Author: nks
 */

#include "Arduino.h"
#include "PhisicalAnalogInput.h"

PhisicalAnalogInput::PhisicalAnalogInput(int pinNumber) {
	this->pinNumber = pinNumber;
}

PhisicalAnalogInput::~PhisicalAnalogInput() {

}

long PhisicalAnalogInput::value(){
	return analogRead(pinNumber);
}



