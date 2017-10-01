/*
 * OutputVoltage.cpp
 *
 *  Created on: Oct 1, 2017
 *      Author: nks
 */

#include "OutputVoltage.h"

OutputVoltage::OutputVoltage(int dividingValue, Voltage *origin) {
	this->origin = origin;
	this->dividingValue = dividingValue;
}

OutputVoltage::~OutputVoltage() {
	delete this->origin;
}

long OutputVoltage::value(){
	return this->origin->value() * this->dividingValue;
}
