#ifndef DEF_GAME
#define DEF_GAME

#include "AbsPlayer.h"
#include "Playground.h"
#include "PlayerBase.h"
#include "Playturn.h"


class Game
{

    AbsPlayer* m_PL;
    AbsPlayer* m_PR;

    Playground* m_P;

    int nbTurns = 1;

public:

    Game();
    Game(int);
    ~Game();

    bool win();
    void play();

    void save();
    bool load();

};

#endif