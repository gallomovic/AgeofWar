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

<<<<<<< Updated upstream
    std::array<Units*,12> pg; //playground

    Units* PlayerBaseL; //base du joueur de gauche
    Units* PlayerBaseR; //base du joueur de droite
=======
    std::array<Units*,12> pg; //tableau contenant les unites sur le terrain de jeu

    Units* PlayerBaseL; //Base du joueur gauche
    Units* PlayerBaseR; //Base du joueur droit
>>>>>>> Stashed changes


    Playground();
    ~Playground();

<<<<<<< Updated upstream
    void printPG(AbsPlayer*,AbsPlayer*); //affichage
    void printlogo(); //affichage du logo au lancement du jeu
=======
    void printPG(AbsPlayer*,AbsPlayer*); //Affiche le terrain de jeu
    void printlogo(); //Affiche le logo
>>>>>>> Stashed changes
    
    bool isFree(int); //Renvoie true si la position de pg passée en paramètre est vide
    
};

#endif
