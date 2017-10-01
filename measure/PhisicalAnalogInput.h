/*
 * PhisicalAnalogPin.h
 *
 *  Created on: Sep 28, 2017
 *      Author: nks
 */

#ifndef MEASURE_PHISICALANALOGINPUT_H_
#define MEASURE_PHISICALANALOGINPUT_H_

#include "AnalogInput.h"

class PhisicalAnalogInput: public AnalogInput {

private:
	int pinNumber;
public:
	PhisicalAnalogInput(int pin);
	virtual ~PhisicalAnalogInput();
	long value();
};

#endif /* MEASURE_PHISICALANALOGINPUT_H_ */
