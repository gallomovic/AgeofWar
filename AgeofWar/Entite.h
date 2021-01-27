#ifndef DEF_ENTITE
#define DEF_ENTITE
#include <iostream>
#include <string>

#include "AbsPlayer.h"
class AbsPlayer;

class Entite
{
protected:

    
    AbsPlayer* m_owner;

public:

    int m_hp;
    std::string m_name;
    

    Entite(int,std::string);
    virtual ~Entite();

    bool isDead() const;

    int getHP() const { return m_hp; }

    virtual void show() = 0;

    void setOwner(AbsPlayer* p) { m_owner = p; }
    AbsPlayer* getOwner() { return m_owner; }

   

};

#endif