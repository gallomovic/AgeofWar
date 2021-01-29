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

    std::array<Units*,12> pg; //playground

    Units* PlayerBaseL; //base du joueur de gauche
    Units* PlayerBaseR; //base du joueur de droite


    Playground(){    };
    ~Playground(){
        //delete this;
    };

    void printPG(AbsPlayer*,AbsPlayer*); //affichage
    void printlogo(); //affichage du logo au lancement du jeu
    
    bool isFree(int); //Renvoie true si la position est vide
    
};

#endif
