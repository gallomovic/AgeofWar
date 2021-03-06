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

    std::cout << "Start a new game ? (y/n) or type 'load' to load :  ";
        
    while (!(std::cin >> answ) && !(answ =="y" || answ =="n" || answ =="load")) {
            std::cin.clear();
            std::cin.ignore(5,'\n');
            std::cout << "Please enter a valid value ('y', 'n', or 'load')" << std::endl;
    }

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

		delete G;

    }
	else if (answ == "load"){

        Game *G = new Game();

		if (!G->load()) { goto begin ;}

		G->play();

		delete G;

    }
    else if (answ == "n"){
		
		system("clear");
        return 0;

    }
    else { std::cout << "Erreur"; }

	goto begin;
}
