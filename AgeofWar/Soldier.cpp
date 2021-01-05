#include "Soldier.h"

Soldier::Soldier() : Units(10,4,10) {}

Soldier::~Soldier() {}

Units Soldier::promote() {
	delete this;
	return new SuperSoldier();
}

void Soldier::attack(Units *cible) const {
	Units::attack(cible);
	if (cible->isDead()) {
		this = promote();
	}
}

void Soldier::show(){

	showHP();
	std::cout << "0/\nY\n^";
		     
}