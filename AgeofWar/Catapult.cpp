#include "Catapult.h"

Catapult::Catapult(bool isLeft) : Units(12, 6, 20,4,"Catapult") {
	
	if (isLeft){
		this->symbol[0] = "   \\o     ";
		this->symbol[1] = "  __\\_    ";
		this->symbol[2] = " |____|   ";	
		this->symbol[3] = " O   O    ";
	}
	else{
		this->symbol[0] = "     o/   ";
		this->symbol[1] = "    _/__    ";
		this->symbol[2] = "   |____|   ";	
		this->symbol[3] = "    O   O    ";
	}
	
}

Catapult::~Catapult() {}

void Catapult::show() {

	std::cout << "0==[]\n   o o";

}