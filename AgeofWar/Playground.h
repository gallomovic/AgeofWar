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

    std::array<Units*,12> pg; //tableau contenant les unites sur le terrain de jeu

    Units* PlayerBaseL; //Base du joueur gauche
    Units* PlayerBaseR; //Base du joueur droit


    Playground();
    ~Playground();

    void printPG(AbsPlayer*,AbsPlayer*); //Affiche le terrain de jeu
    void printlogo(); //Affiche le logo
    
    bool isFree(int); //Renvoie true si la position de pg passée en paramètre est vide
    
};

#endif
