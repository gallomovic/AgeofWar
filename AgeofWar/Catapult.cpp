#include "Catapult.h"

Catapult::Catapult() : Units(12, 6, 20) {}

Catapult::~Catapult() {}

void Catapult::show() {

	showHP();
	std::cout << "0==[]\n   o o";

}