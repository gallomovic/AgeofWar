#include "SuperSoldier.h"

SuperSoldier::SuperSoldier(int hp) : Units(hp, 4, -1, 1,"SuperSoldier") {}

SuperSoldier::~SuperSoldier() {}

void SuperSoldier::show() {

    //   _
    //   O
    // \/|\/
    //  / \.	

	std::cout << " 0/\n{Y}\n ^ ";

}