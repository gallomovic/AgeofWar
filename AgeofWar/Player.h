#ifndef DEF_PLAYER
#define DEF_PLAYER
#include <iostream>
#include <vector>

#include "Playground.hpp"
#include "Units.h"
class Units;

class Player
{
private:

    std::vector<Units*> m_PlayerUnits;
    bool m_isLeft;


public:

    Player(bool);
    ~Player();

    void addUnit(Playground*,Units*,int);
    void deleteUnit(Units*);
    bool isLeft();

};

#endif