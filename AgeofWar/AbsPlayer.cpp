#include "Player.h"


AbsPlayer::AbsPlayer (bool i) : m_isLeft(i) , m_golds(10) {
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

AbsPlayer::~AbsPlayer() {}

void AbsPlayer::setGolds(int value){
    m_golds = value;
}

void AbsPlayer::addUnit(Playground *p, Units *u, int pos) {

    if (pos!=-1) { //Cas unique de la promotion soldat -> supersoldat
        if (p->isFree(pos)) {
            p->pg[pos] = u;
            u->setPos(pos);
            this->m_PlayerUnits.push_back(u);
            u->setOwner(this);
        } 
        return;
    }

    if (this->isLeft()) {  //On considère que la case de la base est libre, la verification est faite en amont dans Playturn
        p->pg[0] = u;
        u->setPos(0);
    } else {
        int a = p->pg.size()-1;
        p->pg[a] = u;
        u->setPos(a);
    }

    this->m_PlayerUnits.push_back(u);
    u->setOwner(this);
}

void AbsPlayer::deleteUnit(Playground* p, Units *u) {

    int i = u->getPos();
    p->pg[i] = NULL;

    for (int i = 0; i<(int)this->m_PlayerUnits.size() ; i++) {
        if (this->m_PlayerUnits.at(i) == u) {
            this->m_PlayerUnits.erase(this->m_PlayerUnits.begin()+i);
        }
    }


   // delete u ; 

}


//Trie le vecteur Unite du joueur en fonction de la position
void AbsPlayer::sortVectorUnit() {
    if (this->isLeft()) {
        std::sort(this->m_PlayerUnits.begin(), this->m_PlayerUnits.end(), 
                [](Units *a, Units *b) {
                  return (a->getPos() < b->getPos());
                }
        );
    } else {
        std::sort(this->m_PlayerUnits.begin(), this->m_PlayerUnits.end(), 
                [](Units *a, Units *b) {
                  return (a->getPos() > b->getPos());
                }
        );
    }
}
