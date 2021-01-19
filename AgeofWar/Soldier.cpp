#include "Soldier.h"

Soldier::Soldier() : Units(10,4,10) {}

Soldier::~Soldier() {}

void Soldier::promote() {
	SuperSoldier *s = new SuperSoldier(this->m_hp);
	delete this;
	/* TODO : Placer le supersoldat */
}

void Soldier::attack(Units *cible) const {
	Units::attack(cible);
	if (cible->isDead()) {
		// promote();
	}
}

void Soldier::show(){

	showHP();
	std::cout << "0/\nY\n^";
		     
}