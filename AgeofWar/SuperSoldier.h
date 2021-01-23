#ifndef DEF_SUPERSOLDIER
#define DEF_SUPERSOLDIER


#include "Units.h"
#include <iostream>
#include <stdlib.h>


class SuperSoldier : public Units {

public:
    //  O
    //\/|\/
    // / \.
	SuperSoldier(int)
	{
		symbol[0][0] = "  O";
		symbol[0][1] = "\\/|\\/";
		symbol[0][2] = "/ \\";
		symbol[0][3] = "";
	};
	~SuperSoldier();

	void show();

};

#endif
