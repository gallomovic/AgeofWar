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
    int m_hp;
    std::string m_name;


public:

    Entite(int,std::string);
    virtual ~Entite();

    bool isDead() const; //Renvoie vrai si l'unite a <= 0 HP

    int getHP() const { return m_hp; }
    void setHP(int i) {  m_hp = i; }

    std::string getName() { return m_name; }

    void setOwner(AbsPlayer* p) { m_owner = p; }
    AbsPlayer* getOwner() { return m_owner; }

    virtual void show() = 0;

};

#endif