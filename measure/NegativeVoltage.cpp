/*
 * NegativVoltage.cpp
 *
 *  Created on: Oct 1, 2017
 *      Author: nks
 */

#include "NegativeVoltage.h"

NegativeVoltage::NegativeVoltage(Voltage *origin) {
	this->origin = origin;
}

NegativeVoltage::~NegativeVoltage() {
	delete this->origin;
}

long NegativeVoltage::value(){
	return (- origin->value());
}
