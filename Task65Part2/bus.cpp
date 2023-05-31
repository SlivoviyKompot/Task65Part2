#pragma once
#include "bus.h"

int Bus::getNumber() {
	return number;
}

void Bus::setNumber(int number) {
	if (number > 0) {
		this->number = number;
	}
}
