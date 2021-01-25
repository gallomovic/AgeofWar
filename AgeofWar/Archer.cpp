#include "Archer.h"

Archer::Archer(bool isLeft) : Units(8, 3, 12, 3,"Archer") {
	if(isLeft){
		this->symbol[0] = "   O      ";
		this->symbol[1] = "  /|\\|)-> ";
		this->symbol[2] = "  / \\     ";
		this->symbol[3] = "          ";
	}
	else {
		this->symbol[0] = "      O   "; 
		this->symbol[1] = " <-(|/|\\  ";
		this->symbol[2] = "     / \\  ";
		this->symbol[3] = "          ";
	}
}

Archer::~Archer() {}

void Archer::show(){


	std::cout << "0\nY}-\n^";

}

void Archer::action3(Playground* p) {
	int i = p->pg.size(); //Lignes inutiles, contourner -Werror : unused-variable
	i--;
}
