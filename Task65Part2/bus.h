#pragma once
#include "transport.h"

class Bus : public Transport {
private:
	int number;

public:
	Bus() : Transport(), number(0) {}
	Bus(int seats, int number) : Transport(seats), number(number) {}
	~Bus() {}

	int getNumber();
	void setNumber(int number);
};

