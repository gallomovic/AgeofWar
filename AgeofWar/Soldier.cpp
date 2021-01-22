#include "Soldier.h"

template<typename Base, typename T>
inline bool instanceof(const T *ptr) {
    return dynamic_cast<const Base*>(ptr) != nullptr;
}

Soldier::Soldier() : Units(10,4,10,1,"Soldier") {}

Soldier::~Soldier() {}

void Soldier::promote(Playground* p) {
	SuperSoldier *s = new SuperSoldier(this->m_hp);
	int i = this->getPosition(p);
	s->setOwner(this->m_owner);
	this->m_owner->deleteUnit(p,this);
	s->getOwner()->addUnit(p,s,i);
}

void Soldier::attack(Playground *p,Units *cible) {
	Units::attack(cible);
	if (cible->isDead() && instanceof<Soldier>(cible) ) {
		this->promote(p);
	}
}

void Soldier::show(){

	
	std::cout << "0/\nY\n^";
		     
}

