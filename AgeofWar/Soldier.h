#ifndef DEF_SOLDIER
#define DEF_SOLDIER


#include "Units.h"
#include "SuperSoldier.h"
#include <iostream>
#include <stdlib.h>


class Soldier : public Units {

private:

	void promote(Playground*);

public:
	//  O
    // /|\/
    // / \.
	Soldier()
	{
		symbol[0][0] = " O";
		symbol[0][1] = "/|\\/";
		symbol[0][2] = "/ \\";
		symbol[0][3] = "";	
	};
	~Soldier();

	void attack(Playground*,Entite*);
	void show();

};


#endif
