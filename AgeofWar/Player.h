#ifndef DEF_PLAYER
#define DEF_PLAYER
#include <iostream>
#include <vector>

class Player
{
private:

    Vector<Units*> m_PlayerUnits;
    bool m_isLeft;


public:

    Player();
    ~Player();

    void addUnit(Units*,int);
    void deleteUnit(Units*);
    bool isLeft();

};

#endif