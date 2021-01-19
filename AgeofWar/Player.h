#ifndef DEF_PLAYER
#define DEF_PLAYER
#include <iostream>

class Entite
{
private:

    Units[] m_PlayerUnits;
    bool isLeft;


public:

    Player();
    ~Player();

    void addUnit(Units*,int);
    void deleteUnit(Units*);
    bool isLeft();

};

#endif