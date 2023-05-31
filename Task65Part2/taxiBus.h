#pragma once
#include "transport.h"

class TaxiBus : public Transport {
private:
	int way;
	//"way" is numbers of taxiBus' routes (0123 : Minsk <> Brest; 1738 : Minsk <> Gomel; ...)
public:
	TaxiBus() : Transport(), way(0) {}
	TaxiBus(int seats, int way) : Transport(seats), way(way) {}
	~TaxiBus() {}

	int getWay();
	void setWay(int way);
};

