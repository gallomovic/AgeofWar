#ifndef DEF_GAME
#define DEF_GAME

#include "Player.h"
#include "Playground.h"
#include "PlayerBase.h"
#include "Playturn.h"


class Game
{

    Player* m_PL;
    Player* m_PR;

    Playground* m_P;

public:

    Game();
    ~Game();

    bool win();
    void play();

};

#endif