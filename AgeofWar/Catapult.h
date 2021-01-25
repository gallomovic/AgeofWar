#ifndef DEF_CATAPULT
#define DEF_CATAPULT


#include "Units.h"
#include <iostream>
#include <stdlib.h>


class Catapult : public Units {

public:

	

	Catapult(bool isLeft);
	~Catapult();

	void show();

};

#endif
