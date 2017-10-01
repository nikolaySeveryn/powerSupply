/*
 * Voltage.h
 *
 *  Created on: Oct 1, 2017
 *      Author: nks
 */

#ifndef MEASURE_VOLTAGE_H_
#define MEASURE_VOLTAGE_H_

class Voltage {
public:
	virtual ~Voltage() {};
	virtual long value() = 0;
};

#endif /* MEASURE_VOLTAGE_H_ */
