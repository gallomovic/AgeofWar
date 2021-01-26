#include <iostream>
#include<string> 
// std::stoi in C++11
//#include<cstdlib> 
// use std::strtol in C++03

#include "Soldier.h"
#include "SuperSoldier.h"
#include "Catapult.h"
#include "Archer.h"
#include "Player.h"
#include "PlayerBase.h"


#include "Game.h"
#include "MainMenu.h"


int main() {


	printMM();

	std::string answ;
    std::cin >> answ ;
    if (answ == "y"){
        
		Game *G = new Game();

		G->play();

    }
    else if (answ == "n"){
        //load game
    }
    else { std::cout << "Erreur"; }

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