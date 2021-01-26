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
	
	Soldier(bool isLeft);
	~Soldier();

	void attack(Playground*,Soldier*);
	void action3(Playground*);

};


#endif
