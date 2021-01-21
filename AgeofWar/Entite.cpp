#include "Units.h"
#include "Entite.h"
#include <iostream>



Entite::Entite(int hp, std::string name) : m_hp(hp), m_name(name) {}

Entite::~Entite() {}

int Entite::getPosition() const {
    //TODO
    return 0;
}

bool Entite::isDead() const {
    return (m_hp <= 0) ? true : false ; 
}
