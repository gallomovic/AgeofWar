#ifndef DEF_ARCHER
#define DEF_ARCHER


#include "Units.h"
#include <iostream>
#include <stdlib.h>


class Archer : public Units {

public:
	Archer(){
		symbol[0][0] = " O     ";
		symbol[0][1] = "/|\\|)->";
		symbol[0][2] = "/ \\";
		symbol[0][3] = "";
	};
	~Archer();

	//bool canAttack();
	void show();

};

#endif