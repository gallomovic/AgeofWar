#ifndef DEF_PLAYGROUND
#define DEF_PLAYGROUND
#include <new>
#include <iostream>
#include <array>
#include "Entite.h"

class Playground
{
protected:

    Entite* pg[12];

public:

    Playground(){    };
    ~Playground(){
        delete this;
    };

    void printPG();
    bool isFree(int); //Renvoie true si la position est vide
    
};

#endif
