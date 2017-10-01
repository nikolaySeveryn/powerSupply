/*
 * AnalogPin.h
 *
 *  Created on: Sep 28, 2017
 *      Author: nks
 */

#ifndef MEASURE_ANALOGINPUT_H_
#define MEASURE_ANALOGINPUT_H_

class AnalogInput {
public:
	virtual ~AnalogInput(){};
	virtual long value() = 0;
};

#endif /* MEASURE_ANALOGINPUT_H_ */
