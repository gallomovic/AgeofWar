#include <iostream>
#include<string> 
// std::stoi in C++11
//#include<cstdlib> 
// use std::strtol in C++03
/*
#include "Soldier.h"
#include "SuperSoldier.h"
#include "Catapult.h"
#include "Archer.h"
#include "Player.h"
#include "PlayerBase.h"
*/

#include "Game.h"
#include "MainMenu.h"


int main() {

/*
	Playground *p = new Playground();

	p->printlogo();	//affichage du logo age of war seulement au début

	Player *p1 = new Player(true);
	Player *p2 = new Player(false);

	PlayerBase *pbl = new PlayerBase();
    p->pg[0] = pbl;

    PlayerBase *pb2 = new PlayerBase();
    p->pg[p->pg.size()-1] = pb2;
    

	p->printPG(p1,p2);

	Catapult *a = new Catapult(p1->isLeft());
	Soldier *s = new Soldier(p2->isLeft());

	p1->addUnit(p,a,-1);
	p2->addUnit(p,s,-1);

	p-> printPG(p1,p2);

	a->move(p);
	s->move(p);

	Soldier *s2 = new Soldier(p2->isLeft());
	p2->addUnit(p,s2,-1);

	p-> printPG(p1,p2);

	a->move(p);
	a->move(p);
	a->move(p);
	a->move(p);
	a->move(p);
	//a->move(p);
	

	a->attack(p,a->canAttack(p));
	a->attack(p,a->canAttack(p));

	
	//a->move(p);

	a->attack(p,a->canAttack(p));

	p-> printPG(p1,p2);

	p1->deleteUnit(p,a);
	//p2->deleteUnit(p,s);

	p->printPG(p1,p2);

	delete p;
	delete p1;
	delete p2;
*/


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