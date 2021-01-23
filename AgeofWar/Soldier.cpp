#include "Soldier.h"


Soldier::Soldier() : Units(10,4,10,1,"Soldier") {
	//  O
    // /|\/
    // / \.
	this->symbol[0] = "   O      ";
	this->symbol[1] = "  /|\\/    ";
	this->symbol[2] = "  / \\     ";
	this->symbol[3] = "          ";	
}

Soldier::~Soldier() {}

void Soldier::promote(Playground* p) {
	SuperSoldier *s = new SuperSoldier(this->getHP());
	int i = this->getPosition(p);
	s->setOwner(this->m_owner);
	this->m_owner->deleteUnit(p,this);
	s->getOwner()->addUnit(p,s,i);
}

void Soldier::attack(Playground *p,Entite *cible) {
	Units::attack(cible);
	if (cible->isDead() && dynamic_cast<Soldier*>(cible) != nullptr ) {
		this->promote(p);
	}
}

void Soldier::show(){

	//  O
    // /|\/
    // / \.
	
	std::cout << "0/\nY\n^";
		     
}

