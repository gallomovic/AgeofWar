#ifndef DEF_CATAPULT
#define DEF_CATAPULT


#include "Units.h"
#include <iostream>
#include <stdlib.h>


class Catapult : public Units {

public:

	//  \o
    // __\_
    //|____|
    // O   O

	Catapult()
	{
		symbol[0][0] = "  \\o";
		symbol[0][1] = " __\\_";
		symbol[0][2] = "|____|";	
		symbol[0][3] = " O   O";
	};
	~Catapult();

	void show();

};

#endif
