#ifndef DEF_ABSPLAYER
#define DEF_ABSPLAYER
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#include "Playground.h"
#include "Units.h"


class Units;
class Playground;


class AbsPlayer
{
protected:

    std::vector<Units*> m_PlayerUnits; //Contient les unités du joueur
    bool m_isLeft; //True = Joueur à gauche
    int m_golds;

    std::string m_name;

    //PlayerBase* PB;

public:

    AbsPlayer(bool);
    ~AbsPlayer();

    void addUnit(Playground*,Units*,int = -1); /* ajoute l'unite passée en paramètre sur le Playground et dans le vecteur d'unités du joueur
                                          int donne la position où ajouter (-1 si non paramétré et donc la premiere case de gauche ou droite) */

    void sortVectorUnit();

    void setGolds(int value);

    int getGolds() {return m_golds;}
    void giveGolds(int i) { this->m_golds += i; std::cout << this->m_name << " receives " << i << " golds. Now has " << this->m_golds << " golds." << std::endl; }

    std::vector<Units*> getUnits() { return m_PlayerUnits; }

    std::string getName() {return m_name;}

    void deleteUnit(Playground*,Units*); // retire l'unite passée en paramètre sur le Playground et dans le vecteur unité du joueur
    bool isLeft() {return m_isLeft;}


    virtual void achatUnit (Playground* p) = 0;

};



#endif