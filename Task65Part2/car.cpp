#pragma once
#include "car.h"

int Car::getSpeed() {
	return speed;
}

void Car::setSpeed(int speed) {
	if (speed > 0) {
		this->speed = speed;
	}
}
