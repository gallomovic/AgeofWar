#ifndef DEF_ENTITE
#define DEF_ENTITE
#include <iostream>
#include <Player.h>

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

};

#endif