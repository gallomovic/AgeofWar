#include "SuperSoldier.h"

SuperSoldier::SuperSoldier(int hp) : Units(hp, 4, -1) {}

SuperSoldier::~SuperSoldier() {}

void SuperSoldier::show() {

	std::cout << " 0/\n{Y}\n ^ ";

}