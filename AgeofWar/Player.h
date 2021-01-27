#ifndef DEF_PLAYER
#define DEF_PLAYER

#include "AbsPlayer.h"


class Player : public AbsPlayer
{

public:

    Player(bool);
    ~Player();


    void achatUnit (Playground* p);

};



#endif