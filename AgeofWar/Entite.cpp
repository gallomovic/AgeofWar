#include "Units.h"
#include "Entite.h"
#include <iostream>



Entite::Entite(int hp, std::string name) : m_hp(hp), m_name(name) {}

Entite::~Entite() {}


bool Entite::isDead() const {
    return (m_hp <= 0) ? true : false ; 
}
