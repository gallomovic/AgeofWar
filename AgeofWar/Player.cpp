#include "Player.h"


Player::Player (bool i) : m_isLeft(i) , m_golds(10) {
/*
    if (i) {
        PlayerBase *pl = new PlayerBase(this);
        p->pg[0] = pl;
    } else {
        PlayerBase *pl = new PlayerBase(this);
        p->pg[p->pg.size()-1] = pl;
    }
*/
}

Player::~Player() {}

void Player::addUnit(Playground *p, Units *u, int pos = -1) {

    if (pos!=-1) { //Cas unique de la promotion soldat -> supersoldat
        if (p->isFree(pos)) {
            p->pg[pos] = u;
            u->setPos(pos);
            this->m_PlayerUnits.push_back(u);
            u->setOwner(this);
        } 
        return;
    }

    if (this->isLeft()) {
        p->pg[1] = u;
        u->setPos(1);
    } else {
        p->pg[p->pg.size()-2] = u;
        u->setPos(p->pg.size()-2);
    }

    this->m_PlayerUnits.push_back(u);
    u->setOwner(this);
}

void Player::deleteUnit(Playground* p, Units *u) {
/*
    for (int i = 0; i<(int)this->m_PlayerUnits.size() ; i++) {
        if (this->m_PlayerUnits.at(i) == u) {
            this->m_PlayerUnits.erase(i);
        }
    }


    delete u ; 
    this->m_PlayerUnits.resize();
*/

    int i = u->getPosition(p);
    p->pg[i] = NULL;

    delete u;
}


//Trie le vecteur Unite du joueur en fonction de la position
void Player::sortVectorUnit() {
        std::sort(this->m_PlayerUnits.begin(), this->m_PlayerUnits.end(), 
                [](Units *a, Units *b) {
                  return (a->getPos() < b->getPos());
                }
        );
}

