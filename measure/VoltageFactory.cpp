/*
 * VoltageFactory.cpp
 *
 *  Created on: Oct 1, 2017
 *      Author: nks
 */

#include "VoltageFactory.h"

#include "AnalogPinNumbers.h"
#include "OutputVoltage.h"
#include "SensorVoltage.h"
#include "CorrectedInput.h"
#include "NegativeVoltage.h"

VoltageFactory::VoltageFactory() {
}

VoltageFactory::~VoltageFactory() {
}

Voltage* VoltageFactory::positive(){
	Voltage *voltage = new OutputVoltage(
							10,
							new SensorVoltage(
								new CorrectedInput(
									1.0125,
									new PhisicalAnalogInput(AnalogPinNumbers::POSITIVE_VOLTAGE)
								)
							)
						);
	return voltage;
}

Voltage* VoltageFactory::negative(){
	Voltage *voltage = new NegativeVoltage(
							new OutputVoltage(
								10,
								new SensorVoltage(
									new CorrectedInput(
										1.0125,
										new PhisicalAnalogInput(AnalogPinNumbers::POSITIVE_VOLTAGE)
									)
								)
							)
						);
		return voltage;
}
