#include "measure/Voltage.h"
#include "measure/VoltageFactory.h"

Voltage *voltage;

void setup() {
	Serial.begin(57600);
	VoltageFactory *factory = new VoltageFactory();
	voltage = factory->negative();
}

void loop() {
	Serial.println((double) voltage->value() / 1000);
	delay(1000);
}

