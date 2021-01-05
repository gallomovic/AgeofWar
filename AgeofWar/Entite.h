#ifndef DEF_ENTITE
#define DEF_ENTITE
#include <iostream>

class Entite
{
protected:

    int m_hp;


public:

    Entite(int);
    ~Entite();

    int getPosition() const;

    bool isDead() const;

};

#endif