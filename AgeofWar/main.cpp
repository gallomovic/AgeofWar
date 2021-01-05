#include <iostream>
#include "Soldier.h"
#include "SuperSoldier.h"
#include "Catapult.h"
#include "Archer.h"

int main() {

	Soldier *test = new Soldier();

	Archer test2;

	test->show();

	test2.attack(test);

	test->show();

	return 0;
}