/*
 * SensorVoltage.cpp
 *
 *  Created on: Oct 1, 2017
 *      Author: nks
 */

#include "SensorVoltage.h"

SensorVoltage::~SensorVoltage() {
	delete this->input;
}

SensorVoltage::SensorVoltage(AnalogInput *input) {
	this->input = input;
}

long SensorVoltage::value(){
	return SensorVoltage::findVoltage(input->value());
}

double SensorVoltage::multiplicator(){
	return (double) SensorVoltage::VOLTAGE_MAX / (double) SensorVoltage::VALUE_MAX;
}

long SensorVoltage::findVoltage(long sensorValue){
	return (double)sensorValue * SensorVoltage::multiplicator();
}
