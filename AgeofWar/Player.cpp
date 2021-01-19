#include "Player.h"


Player::Player (bool i) : m_isLeft(i) {}

Player::~Player() {}

void Player::addUnit(Playground *p, Units *u, int pos = -1) {

    if (pos!=-1) { //Cas unique de la promotion soldat -> supersoldat
        if (p->isFree(pos)) {
            p->pg[pos] = u;
            this->m_PlayerUnits.push_back(u);
            u->setOwner(this);
        } 
        return;
    }

    if (this->isLeft()) {
        p->pg[1] = u;
    } else {
        p->pg[11] = u;
    }

    this->m_PlayerUnits.push_back(u);
    u->setOwner(this);
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