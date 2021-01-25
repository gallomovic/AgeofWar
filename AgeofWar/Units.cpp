#include "Units.h"


Units::Units(int hp, int ap, int price, int portee, std::string name ) : Entite(hp,name), m_ap(ap), m_price(price),m_portee(portee)
{}

Units::~Units() {}

void Units::attackBase(Entite *base) const {

	base->m_hp -= m_ap;

}

void Units::attack (Playground* p, Units *cible) const {

	cible->m_hp -= this->m_ap;

	std::cout << this->m_name << " at " << this->getPos() << ": 'Attacking " << cible->m_name << " at " << cible->getPos() << " (" <<cible->getHP() << " HP left) !'" << std::endl;

	if (cible->isDead()){

		std::cout << cible->m_name << " at " << cible->getPos() << " is dead ! " << std::endl;

		this->m_owner->giveGolds(cible->m_price/2); // le joueur gagne la moitié du prix de l'unité tuée
	
		cible->getOwner()->deleteUnit(p,cible); //la cible est détruite
		

	}
}


void Units::move(Playground *p) {

	int i = this->getPosition(p);

	if(this->m_owner->isLeft()) { //Unité du joueur gauche
		if (p->isFree(i+1) &&  i<10) {
			p->pg[i+1] = this;
			p->pg[i] = NULL;
			this->setPos(i+1);
			std::cout << this->m_name << " at " << i+1 << ": Moving to " << i+2 << std::endl;
		} else {
			std::cerr << "Move failed";
		}
	} else {					//Unité du joueur droit
		if (p->isFree(i-1) && i>2) {
			p->pg[i-1] = this;
			p->pg[i] = NULL;
			this->setPos(i-1);
			std::cout << this->m_name << " at " << i+1 << ": Moving to " << i << std::endl;
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

Units* Units::canAttack(Playground *p) {

	int i = this->getPos();
	int n= 0;

	if (this->m_owner->isLeft()) {

		while ( i+n<(int)p->pg.size()-1 && n<this->m_portee) {

			if (p->pg[i+1+n] != NULL && p->pg[i+1+n]->getOwner() != this->m_owner) {
				return p->pg[i+1+n];
			}
			n++;

			if (i+n==11) { return p->PlayerBaseR; } //Pas d'unité trouvée on check si on peut attaquer la base
		}



	} else {

		while ( i-n>0 && n<this->m_portee) {

			if (p->pg[i-1-n] != NULL && p->pg[i-1-n]->getOwner() != this->m_owner) {
				return p->pg[i-1-n];
			}
			n++;

			if (i-n==0) { return p->PlayerBaseL; } //Pas d'unité trouvée on check si on peut attaquer la base
		}
	}


	return NULL;

}

void Units::action1(Playground* p) {

	Units* cible = this->canAttack(p);

	if (cible != NULL) { this->attack(p,cible); this->A1 = true; }
	
}

void Units::action2(Playground* p) {

	this->move(p);
	
}

void Units::action3(Playground* p) {

	Units* cible = this->canAttack(p);

	if (cible != NULL) { this->attack(p,cible); }
	
}

