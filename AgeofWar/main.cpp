#include <iostream>
#include<string> // std::stoi in C++11
//#include<cstdlib> // use std::strtol in C++03
#include "Soldier.h"
#include "SuperSoldier.h"
#include "Catapult.h"
#include "Archer.h"
#include "Player.h"
#include "Playground.hpp"

int main() {

	init();

	Archer *a = new Archer();
	Soldier *s = new Soldier();

	p1.addUnit(p,a);
	p1.addUnit(p,s);
	p1.deleteUnit(a);

	return 0;
}


void init() {

	Playground p = new Playground();

	Player *p1 = new Player(true);
	Player *p2 = new Player(false);	

}
/*


int main(int argc, char * argv[]) {
	if (argc>=2) {
	// convert from *char to int to use switch
	int mode = std::stoi(argv[1]);
	switch ( mode ){
		case 1:
		case 2:
		std::cout << "Game mode : " << mode << std::endl;
		break;
		default:
		std::cerr << "Unknown game mode." << std::endl;
		return 0;
	}
	} else {
		std::cerr << "Not enough arguments. Aborting..." << std::endl;
	return 0;
	}
	return 0;
}

*/