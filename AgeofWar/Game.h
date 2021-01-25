#ifndef DEF_GAME
#define DEF_GAME

#include "Player.h"
#include "Playground.h"

class Game
{

    Player* m_PL;
    Player* m_PR;

    Playground* m_P;

public:

    void init();
    bool win();

    void play();

};

#endif