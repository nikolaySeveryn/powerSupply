/*
 * CorrectedPin.cpp
 *
 *  Created on: Sep 28, 2017
 *      Author: nks
 */

#include "CorrectedInput.h"

CorrectedInput::CorrectedInput(double multiplicator, AnalogInput *original) {
	this->original = original;
	this->multiplicator = multiplicator;
}

CorrectedInput::~CorrectedInput() {
	delete original;
}

long CorrectedInput::value() {
	long realValue = original->value();
	const double corrected = (double)realValue * multiplicator;
	return (long) corrected;
}

