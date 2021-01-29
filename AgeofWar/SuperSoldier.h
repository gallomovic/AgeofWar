#ifndef DEF_SUPERSOLDIER
#define DEF_SUPERSOLDIER


#include "Units.h"
#include <iostream>
#include <stdlib.h>


class SuperSoldier : public Units {

public:
    
	SuperSoldier(int); //Constructeur avec le nombre de pv en paramètre
	~SuperSoldier();

};

#endif
