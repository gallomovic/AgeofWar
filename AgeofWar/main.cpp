#include <iostream>
#include<string> // std::stoi in C++11
//#include<cstdlib> // use std::strtol in C++03
#include "Soldier.h"
#include "SuperSoldier.h"
#include "Catapult.h"
#include "Archer.h"

int main() {

	Soldier *test = new Soldier();

	Archer test2;

	test->show();

	test2.attack(test);

	test->show();

	return 0;
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