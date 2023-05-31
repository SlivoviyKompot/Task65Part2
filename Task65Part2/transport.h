#pragma once
#include "main.h"

class Transport{
private:
	int seats;
public:
	Transport() : seats(0) {}
	Transport(int seats) : seats(seats) {}
	~Transport() {}

	int getSeats();
	void setSeats(int seats);
};

