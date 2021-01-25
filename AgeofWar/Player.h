#ifndef DEF_PLAYER
#define DEF_PLAYER
#include <iostream>
#include <vector>
#include <algorithm>

#include "Playground.h"
#include "Units.h"


class Units;
class Playground;


class Player
{
private:

    std::vector<Units*> m_PlayerUnits; //Contient les unités du joueur
    bool m_isLeft; //True = Joueur à gauche
    int m_golds;

    //PlayerBase* PB;

public:

    Player(bool);
    ~Player();

    void addUnit(Playground*,Units*,int); /* ajoute l'unite passée en paramètre sur le Playground et dans le vecteur d'unités du joueur
                                          int donne la position où ajouter (-1 si non paramétré et donc la premiere case de gauche ou droite) */

    void sortVectorUnit();

    void setGolds(int value);

    int getGolds() {return m_golds;}
    void giveGolds(int i) { this->m_golds += i; }

    void deleteUnit(Playground*,Units*); // retire l'unite passée en paramètre sur le Playground et dans le vecteur unité du joueur
    bool isLeft() {return m_isLeft;}

};



#endif