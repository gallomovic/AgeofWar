#ifndef DEF_UNITS
#define DEF_UNITS


#include <iostream>
#include <stdlib.h>
#include "Entite.h"


class Units : public Entite {

protected:

	int m_hp;  // Health Points
	int m_ap;	 // Attack Points
	int m_price;


public:

	Units(int,int,int);

	/*
	int getHP() const;
	int getAP() const;
	int getPrice() const;
	void setHP(int);
	*/

	void attack(Units*) const;

	void move();

	bool isAlive();


	void showHP() const;

	virtual void show()=0;


};


#endif