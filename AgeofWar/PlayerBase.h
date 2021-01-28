#ifndef DEF_PLAYERBASE
#define DEF_PLAYERBASE

#include <iostream>
#include <stdlib.h>
#include <string>

#include "Units.h"

class PlayerBase : public Units { //Probleme d'include circulaire si PlayerBase herite de Entite... (╯°□°）╯︵ ┻━┻)

public:

    PlayerBase();
    ~PlayerBase();

};

#endif