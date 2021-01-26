#include "SuperSoldier.h"

SuperSoldier::SuperSoldier(int hp) : Units(hp, 4, 10, 1,"SupSoldier") {
    //  O
    //\/|\/
    // / \.
    this->symbol[0] = "   O      ";
	this->symbol[1] = " \\/|\\/    ";
	this->symbol[2] = "  / \\     ";
	this->symbol[3] = "          ";
}

SuperSoldier::~SuperSoldier() {}
