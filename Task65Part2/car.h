#pragma once
#include "transport.h"

class Car : public Transport {
private:
	int speed;

public:
	Car() : Transport(), speed(0) {}
	Car(int seats, int speed) : Transport(seats), speed(speed) {}
	~Car() {}

	int getSpeed();
	void setSpeed(int speed);
};

