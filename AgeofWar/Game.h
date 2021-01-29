#ifndef DEF_GAME
#define DEF_GAME

#include "AbsPlayer.h"
#include "Playground.h"
#include "PlayerBase.h"
#include "Playturn.h"


class Game
{

    AbsPlayer* m_PL; //Joueur gauche
    AbsPlayer* m_PR; //Joueur droit

    Playground* m_P; //Terrain de jeu

    int nbTurns = 1; //Compteur de tours

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