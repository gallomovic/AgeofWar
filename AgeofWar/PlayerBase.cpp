#include "PlayerBase.h"

PlayerBase::PlayerBase() : Units(100,-1,-1,-1,"PlayerBase") {

	symbol[0]="          ";
	symbol[1]="          ";
	symbol[2]="          ";
	symbol[3]="          ";
}

PlayerBase::~PlayerBase() {} 

void PlayerBase::show(){


	std::cout << "0\nY}-\n^";

}