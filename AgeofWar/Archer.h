#ifndef DEF_ARCHER
#define DEF_ARCHER


#include "Units.h"
#include <iostream>
#include <stdlib.h>


class Archer : public Units {

public:
	Archer(bool isLeft);
	~Archer();

	//bool canAttack();
	void show();

};

#endif