#ifndef DEF_SUPERSOLDIER
#define DEF_SUPERSOLDIER


#include "Units.h"
#include <iostream>
#include <stdlib.h>


class SuperSoldier : public Units {

public:

	SuperSoldier(int);
	~SuperSoldier();

	void show();

};

#endif
