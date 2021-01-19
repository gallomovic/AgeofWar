#ifndef DEF_ENTITE
#define DEF_ENTITE
#include <iostream>

#include "Player.h"
class Player;

class Entite
{
protected:

    int m_hp;
    Player* m_owner;

public:

    Entite(int);
    ~Entite();

    int getPosition() const;
    bool isDead() const;

    void setOwner(Player* p) { m_owner = p; }

};

#endif