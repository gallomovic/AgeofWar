#include <iostream>
#include <string> 
// std::stoi in C++11
//#include<cstdlib> 
// use std::strtol in C++03

#include "Soldier.h"
#include "SuperSoldier.h"
#include "Catapult.h"
#include "Archer.h"
#include "AbsPlayer.h"
#include "PlayerBase.h"


#include "Game.h"
#include "MainMenu.h"


int main() {


	begin:

	system("clear");

	printMM();

	std::string answ;
    std::cin >> answ;

    if (answ == "y"){
        
		std::cout << std::endl << "Choose game mode: 	1) P1 vs P2 	2) P1 vs COM 	3) COM vs COM	" << std::endl;
		int i;

		while (!(std::cin >> i) || i>3 || i<1) {
                std::cin.clear();
                std::cin.ignore(4,'\n');
                std::cout << "Please enter a valid value (1, 2 or 3)" << std::endl;
        }

		Game *G = new Game(i);

		G->play();

    }
	else if (answ == "load"){

        Game *G = new Game();

		G->load();

		G->play();

    }
    else if (answ == "n"){

        return 0;

    }
    else { std::cout << "Erreur"; }

	goto begin;
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