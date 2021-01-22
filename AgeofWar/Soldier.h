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

	Soldier();
	~Soldier();

	void attack(Playground*,Entite*);
	void show();

};


#endif
