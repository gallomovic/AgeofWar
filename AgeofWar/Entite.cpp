#include "Entite.h"
#include <iostream>



Entite::Entite(int hp) : m_hp(hp) {}

Entite::~Entite() {}

int Entite::getPosition() const {
    //TODO
    return 0;
}

bool Entite::isDead() const {
    (m_hp <= 0) ? true : false ; 
}
