#ifndef DEF_PLAYER
#define DEF_PLAYER
#include <iostream>
#include <vector>

#include "Playground.h"
#include "Units.h"

class Units;
class Playground;

class Player
{
private:

    std::vector<Units*> m_PlayerUnits;
    bool m_isLeft;
    int m_golds;


public:

    Player(bool);
    ~Player();

    void addUnit(Playground*,Units*,int);

    int getGolds() {return m_golds;}

    void deleteUnit(Playground*,Units*);
    bool isLeft();

};



#endif