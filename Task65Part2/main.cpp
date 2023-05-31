#pragma once
#include "festival.h"
#include "car.h"
#include "bus.h"
#include "taxiBus.h"

int main() {
	Car car1(3, 240);
	Car car2(7, 160);
	Car car3(5, 200);
	Bus bus1(23, 10385);
	Bus bus2(19, 30073);
	TaxiBus taxiBus(17, 1270);

	Car cars[3] = { car1, car2, car3 };
	Bus buses[2] = { bus1, bus2 };
	TaxiBus taxiBuses[1] = { taxiBus };

	int total = Festival::calculateTotalSeats(buses, 2, taxiBuses, 1, cars, 3);

	cout << "Total number of seats is " << total << endl;

	return 0;
}