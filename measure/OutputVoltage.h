/*
 * OutputVoltage.h
 *
 *  Created on: Oct 1, 2017
 *      Author: nks
 */

#ifndef MEASURE_OUTPUTVOLTAGE_H_
#define MEASURE_OUTPUTVOLTAGE_H_

#include "Voltage.h"

class OutputVoltage: public Voltage {
private:
	Voltage * origin;
	int dividingValue;
public:
	OutputVoltage(int dividingValue, Voltage *origin);
	virtual ~OutputVoltage();
	long value();
};

#endif /* MEASURE_OUTPUTVOLTAGE_H_ */
