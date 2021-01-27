#ifndef DEF_COMPUTER
#define DEF_COMPUTER

#include "AbsPlayer.h"

class Computer : public AbsPlayer
{

public:

    Computer(bool);
    ~Computer();


    void achatUnit (Playground* p);

};



#endif