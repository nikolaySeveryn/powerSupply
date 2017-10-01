/*
 * NegativVoltage.h
 *
 *  Created on: Oct 1, 2017
 *      Author: nks
 */

#ifndef MEASURE_NEGATIVEVOLTAGE_H_
#define MEASURE_NEGATIVEVOLTAGE_H_

#include "Voltage.h"

class NegativeVoltage: public Voltage {
private:
	Voltage *origin;
public:
	NegativeVoltage(Voltage *origin);
	virtual ~NegativeVoltage();
	long value();
};

#endif /* MEASURE_NEGATIVEVOLTAGE_H_ */
