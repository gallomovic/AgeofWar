#include "Player.h"


void Player::addUnit(Units *u, int pos = -1) {

    if (pos!=-1) { //Cas unique de la promotion soldat -> supersoldat
        if (Playground::isFree(pos)) {
            pg[pos] = u;
            this->m_PlayerUnits.push_back(u);
            u->m_owner = this;
        } 
        return;
    }

    if (this->isLeft) {
        pg[1] = u;
    } else {
        pg[11] = u;
    }

    this->m_PlayerUnits.push_back(u);
    u->m_owner = this;
}

void Player::removeUnit(Units *u) {

    for (int i = 0; i<this->m_PlayerUnits.size() ; i++) {
        if (this->m_PlayerUnits.at(i) == u) {
            this->m_PlayerUnits.erase(i);
        }
    }
    
/*
    delete u ; 
    this->m_PlayerUnits.resize();
*/
}

bool Player::isLeft() {
    return m_isLeft;
}