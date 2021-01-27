#ifndef DEF_PLAYGROUND
#define DEF_PLAYGROUND
#include <new>
#include <iostream>
#include <array>
#include <vector>

#include "Units.h"
#include "AbsPlayer.h"

class AbsPlayer;
class Units;

class Playground
{

public:

    std::array<Units*,12> pg;

    Units* PlayerBaseL;
    Units* PlayerBaseR;


    Playground(){    };
    ~Playground(){
        //delete this;
    };

    void printPG(AbsPlayer*,AbsPlayer*);
    void printlogo();
    
    bool isFree(int); //Renvoie true si la position est vide
    
};

#endif
