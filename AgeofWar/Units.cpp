#include "Units.h"


Units::Units(int hp, int ap, int price, int portee, std::string name ) : Entite(hp,name), m_ap(ap), m_price(price),m_portee(portee)
{}

Units::~Units() {}

void Units::attack (Entite *cible) const {

	cible->m_hp -= m_ap;

}

void Units::attack (Playground* p, Units *cible) const {

	cible->m_hp -= m_ap;

	if (cible->isDead()){

		this->m_owner->giveGolds(cible->m_price/2); // le joueur gagne la moitié du prix de l'unité tuée

		cible->getOwner()->deleteUnit(p,cible); //la cible est détruite

	}
}


void Units::move(Playground *p) {

	int i = this->getPosition(p);

	if(this->m_owner->isLeft()) { //Unité du joueur gauche
		if (p->isFree(i+1) &&  i<11) {
			p->pg[i+1] = this;
			p->pg[i] = NULL;
			this->setPos(i+1);
		} else {
			std::cerr << "Move failed";
		}
	} else {					//Unité du joueur droit
		if (p->isFree(i-1) && i>1) {
			p->pg[i-1] = this;
			p->pg[i] = NULL;
			this->setPos(i-1);
		} else {
			std::cerr << "Move failed";
		}
	}
}

int Units::getPosition(Playground *p) {

	for (int i = 0; i< (int)p->pg.size() ; i++) {
        if (p->pg[i] == this) {
            return i;
        }
    }

	std::cerr << "Unit not found";
	return -1;

}

Entite* Units::canAttack(Playground *p) {

	int i = this->getPos();
	int n= 0;

	if (this->m_owner->isLeft()) {

		while ( i<(int)p->pg.size()-1 && n<this->m_portee) {

			if (p->pg[i+1+n] != NULL && p->pg[i+1+n]->getOwner() != this->m_owner) {
				return p->pg[i+1+n];
			}
			n++;
		}

	} else {

		while ( i>0 && n<=this->m_portee) {

			if (p->pg[i-1-n] != NULL && p->pg[i-1-n]->getOwner() != this->m_owner) {
				return p->pg[i-1-n];
			}
			n++;
		}
	}

	return NULL;

}

