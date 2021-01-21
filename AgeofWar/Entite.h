#ifndef DEF_ENTITE
#define DEF_ENTITE
#include <iostream>
#include <string>

#include "Player.h"
class Player;

class Entite
{
protected:

    int m_hp;
    Player* m_owner;

public:

    std::string m_name;

    Entite(int,std::string);
    ~Entite();

    int getPosition() const;
    bool isDead() const;

    int getHP() const { return m_hp; }

    void setOwner(Player* p) { m_owner = p; }

};

#endif