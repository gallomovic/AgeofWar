#ifndef DEF_PLAYGROUND
#define DEF_PLAYGROUND
#include <new>
#include <iostream>
#include <array>
#include <vector>

#include "Units.h"

class Player;
class Entite;

class Playground
{

public:



    std::array<Entite*,12> pg;


    Playground(){    };
    ~Playground(){
        //delete this;
    };

    void printPG(Player*,Player*);
    void printlogo();
    
    bool isFree(int); //Renvoie true si la position est vide
    
};

#endif
