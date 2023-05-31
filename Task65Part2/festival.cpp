#pragma once
#include "festival.h"

int Festival::calculateTotalSeats(Bus* buses, int busSize, TaxiBus* taxiBuses, int taxiBusSize, Car* cars, int carSize) {
	int total = 0;

	for (int i = 0; i < busSize; i++) {
		total += buses[i].getSeats();
	}

	for (int i = 0; i < taxiBusSize; i++) {
		total += taxiBuses[i].getSeats();
	}

	for (int i = 0; i < carSize; i++) {
		total += cars[i].getSeats();
	}


	return total;
}
