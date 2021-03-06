#ifndef HMC6352_H
#define HMC6352_H

#include "Arduino.h"
#include "Wire.h"

class HMC6352 {
public:
	HMC6352();
	~HMC6352();

	void setHeading();

	float getAngle();

	void refresh();
private:
	// Wire setup
	uint8_t _masterAddress = 0x42;
	uint8_t _slaveAddress = _masterAddress >> 1;

	float _heading = 0;
	float _angle;
};

#endif /* HMC6352_h */