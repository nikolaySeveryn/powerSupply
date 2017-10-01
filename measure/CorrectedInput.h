/*
 * CorrectedPin.h
 *
 *  Created on: Sep 28, 2017
 *      Author: nks
 */

#ifndef MEASURE_CORRECTEDINPUT_H_
#define MEASURE_CORRECTEDINPUT_H_

#include "PhisicalAnalogInput.h"
#include "AnalogInput.h"

class CorrectedInput: public AnalogInput {
private:
	AnalogInput *original;
	double multiplicator;
public:
	CorrectedInput(const double multiplicator, AnalogInput *original);
	virtual ~CorrectedInput();
	long value();
};

#endif /* MEASURE_CORRECTEDINPUT_H_ */
