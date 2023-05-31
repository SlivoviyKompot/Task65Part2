#pragma once
#include "transport.h"

int Transport::getSeats() {
	return seats;
}
void Transport::setSeats(int seats) {
	if (seats > 0) {
		this->seats = seats;
	}
}