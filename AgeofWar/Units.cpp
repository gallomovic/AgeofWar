#include "Units.h"


Units::Units(int hp, int ap, int price, std::string name ) : Entite(hp,name), m_ap(ap), m_price(price)
{}

Units::~Units() {}

void Units::attack (Units *cible) const {

	cible->m_hp -= m_ap;

}


void Units::move(Playground *p) {

	int i = this->getPosition(p);

	if(this->m_owner->isLeft()) { //Unité du joueur gauche
		if (p->isFree(i+1) &&  i<11) {
			p->pg[i+1] = this;
			p->pg[i] = nullptr;
		} else {
			std::cerr << "Move failed";
		}
	} else {					//Unité du joueur droit
		if (p->isFree(i-1) && i>1) {
			p->pg[i-1] = this;
			p->pg[i] = nullptr;
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


