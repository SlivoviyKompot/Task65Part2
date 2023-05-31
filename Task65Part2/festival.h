#pragma once
#include "transport.h"
#include "bus.h"
#include "car.h"
#include "taxiBus.h"

class Festival {
public:
	static int calculateTotalSeats(Bus* buses, int busSize, TaxiBus* taxiBuses, int taxiBusSize, Car* cars, int carSize);
};

