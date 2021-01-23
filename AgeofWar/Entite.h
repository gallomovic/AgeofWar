#ifndef DEF_ENTITE
#define DEF_ENTITE
#include <iostream>
#include <string>

#include "Player.h"
class Player;

class Entite
{
protected:

    
    Player* m_owner;

public:

    int m_hp;
    std::string m_name;
    std::string symbol[4];

    Entite(int,std::string);
    virtual ~Entite();

    bool isDead() const;

    int getHP() const { return m_hp; }

    virtual void show()=0;

    void setOwner(Player* p) { m_owner = p; }
    Player* getOwner() { return m_owner; }

    std::string getSymbol(int i) { return this->symbol[i]; }

};

#endif