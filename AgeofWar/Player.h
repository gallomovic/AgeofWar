#ifndef DEF_PLAYER
#define DEF_PLAYER
#include <iostream>
#include <vector>

#include "Playground.h"
#include "Units.h"

class Player
{
private:

    std::vector<Units*> m_PlayerUnits;
    bool m_isLeft;


public:

    Player();
    ~Player();

    void addUnit(Units*,int);
    void deleteUnit(Units*);
    bool isLeft();

};

#endif