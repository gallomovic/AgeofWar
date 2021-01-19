#include "Units.h"


Units::Units(int hp, int ap, int price) : Entite(hp), m_ap(ap), m_price(price)
{}


void Units::attack (Units *cible) const {

	cible->m_hp -= m_ap;

}

void Units::showHP() const {

	std::cout << "\n\n" << m_hp << "\n";

}

void Units::move() {
	//TODO
}


