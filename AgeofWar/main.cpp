#include <iostream>
#include<string> // std::stoi in C++11
//#include<cstdlib> // use std::strtol in C++03
#include "Soldier.h"
#include "SuperSoldier.h"
#include "Catapult.h"
#include "Archer.h"
#include "Player.h"
#include "PlayerBase.h"

int main() {


	Playground *p = new Playground();

	p->printlogo();	//afichage du logo age of war seulement au début

	Player *p1 = new Player(true);
	Player *p2 = new Player(false);

	PlayerBase *pbl = new PlayerBase();
    p->pg[0] = pbl;

    PlayerBase *pb2 = new PlayerBase();
    p->pg[p->pg.size()-1] = pb2;
    

	p->printPG(p1,p2);

	Soldier *a = new Soldier();
	Soldier *s = new Soldier();

	std::cout << "TEST :" << a->getSymbol(0);

	p1->addUnit(p,a,-1);
	p2->addUnit(p,s,-1);

	p-> printPG(p1,p2);

	a->move(p);
	s->move(p);

	p-> printPG(p1,p2);

	a->move(p);
	a->move(p);
	a->move(p);
	a->move(p);
	a->move(p);
	a->move(p);
	a->move(p);

	a->attack(p,a->canAttack(p));
	a->attack(p,a->canAttack(p));
	a->attack(p,a->canAttack(p));

	p-> printPG(p1,p2);

	//p1->deleteUnit(p,a);
	p2->deleteUnit(p,s);

	p->printPG(p1,p2);

	delete p;
	delete p1;

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