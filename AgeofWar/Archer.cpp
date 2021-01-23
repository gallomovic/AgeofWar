#include "Archer.h"

Archer::Archer() : Units(8, 3, 12,3,"Archer") {
	this->symbol[0] = "   O      ";
	this->symbol[1] = "  /|\\|)-> ";
	this->symbol[2] = "  / \\     ";
	this->symbol[3] = "          ";
}

Archer::~Archer() {}

void Archer::show(){


	std::cout << "0\nY}-\n^";

}

