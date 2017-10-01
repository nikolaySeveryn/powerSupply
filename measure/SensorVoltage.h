/*
 * SensorVoltage.h
 *
 *  Created on: Oct 1, 2017
 *      Author: nks
 */

#ifndef MEASURE_SENSORVOLTAGE_H_
#define MEASURE_SENSORVOLTAGE_H_

#include "Voltage.h"
#include "AnalogInput.h"

class SensorVoltage: public Voltage {

private:
	AnalogInput *input;
	static double multiplicator();
	static long findVoltage(long sensorValue);
	static const int VALUE_MAX = 1023;
	static const int VOLTAGE_MAX = 5000;
public:
	virtual ~SensorVoltage();
	SensorVoltage(AnalogInput *input);
	long value();
};

#endif /* MEASURE_SENSORVOLTAGE_H_ */
