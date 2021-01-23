#include "Catapult.h"

Catapult::Catapult() : Units(12, 6, 20,4,"Catapult") {
	//  \o
    // __\_
    //|____|
    // O   O
	
	this->symbol[0] = "   \\o     ";
	this->symbol[1] = "  __\\_    ";
	this->symbol[2] = " |____|   ";	
	this->symbol[3] = " O   O    ";
}

Catapult::~Catapult() {}

void Catapult::show() {

	std::cout << "0==[]\n   o o";

}