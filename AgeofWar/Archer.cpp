#include "Archer.h"

Archer::Archer() : Units(8, 3, 12) {}

Archer::~Archer() {}

void Archer::show(){

	showHP();
	std::cout << "0\nY}-\n^";

}

//test
