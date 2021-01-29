#ifndef DEF_SOLDIER
#define DEF_SOLDIER


#include "Units.h"
#include "SuperSoldier.h"
#include <iostream>
#include <stdlib.h>


class Soldier : public Units {

private:

	void promote(Playground*); //promotion de soldat a supersoldat

public:
	
	Soldier(bool isLeft);
	~Soldier();

	void attack(Playground*,Units*) ;
	void action3(Playground*);

};


#endif
