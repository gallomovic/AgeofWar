#include "Catapult.h"

Catapult::Catapult(bool isLeft) : Units(12, 6, 20, 4,"Catapult") {
	
	if (isLeft){
		this->symbol[0] = "   \\o     ";
		this->symbol[1] = "  __\\_    ";
		this->symbol[2] = " |____|   ";	
		this->symbol[3] = " O   O    ";
	}
	else{
		this->symbol[0] = "     o/   ";
		this->symbol[1] = "    _/__  ";
		this->symbol[2] = "   |____| ";	
		this->symbol[3] = "    O   O ";
	}
	
}

Catapult::~Catapult() {}

void Catapult::attack(Playground *p,Units *cible) {
	int d = std::abs(this->getPos() - cible->getPos());
	if (d == 2) { 
		Units::attack(p,cible); 
		if (this->getOwner()->isLeft()) {
			if (this->getPos()+3 < (int)p->pg.size() && p->pg[this->getPos()+3] != NULL) { Units::attack(p,p->pg[this->getPos()+3]); }
		} else {
			if (this->getPos()-3 >= 0 && p->pg[this->getPos()-3] != NULL) { Units::attack(p,p->pg[this->getPos()-3]); }
		}
	}
	if (d == 3) { 
		Units::attack(p,cible); 
		if (this->getOwner()->isLeft()) {
			if (this->getPos()+4 < (int)p->pg.size() && p->pg[this->getPos()+4] != NULL) { Units::attack(p,p->pg[this->getPos()+4]); }
		} else {
			if (this->getPos()-4 >= 0 && p->pg[this->getPos()-4] != NULL) { Units::attack(p,p->pg[this->getPos()-4]); }
		}
	}
	if (d == 4) { 
		Units::attack(p,cible); 
		if (this->getOwner()->isLeft()) {
			if (this->getPos()+3 < (int)p->pg.size() && p->pg[this->getPos()+3] != NULL) { Units::attack(p,p->pg[this->getPos()+3]); }
		} else {
			if (this->getPos()-3 >= 0 && p->pg[this->getPos()-3] != NULL) { Units::attack(p,p->pg[this->getPos()-3]); }
		}
	}
}

void Catapult::show() {

	std::cout << "0==[]\n   o o";

}

void Catapult::action2(Playground* p) {
	int i = p->pg.size(); //Lignes inutiles, contourner -Werror : unused-variable
	i--;
}

void Catapult::action3(Playground* p) {

	if (!this->A1) { this->move(p); }
	
	this->A1 = false;
}