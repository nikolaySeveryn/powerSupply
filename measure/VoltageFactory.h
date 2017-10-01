/*
 * VoltageFactory.h
 *
 *  Created on: Oct 1, 2017
 *      Author: nks
 */
#include "Voltage.h"

#ifndef MEASURE_VOLTAGEFACTORY_H_
#define MEASURE_VOLTAGEFACTORY_H_

class VoltageFactory {
public:
	VoltageFactory();
	virtual ~VoltageFactory();
	Voltage *positive();
	Voltage *negative();
};

#endif /* MEASURE_VOLTAGEFACTORY_H_ */
