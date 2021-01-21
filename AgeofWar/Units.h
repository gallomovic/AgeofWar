#ifndef DEF_UNITS
#define DEF_UNITS

#include <iostream>
#include <stdlib.h>
#include <string>

#include "Entite.h"

class Playground;

class Units : public Entite {

protected:

	int m_hp;  // Health Points
	int m_ap;	 // Attack Points
	int m_price;

	bool A1 = false; //Did action 1
	bool A2 = false;
	bool A3 = false;


public:

	Units(int,int,int,std::string);
	virtual ~Units();


	/*
	int getHP() const;
	int getAP() const;
	int getPrice() const;
	void setHP(int);
	*/

	void attack(Units*) const;

	void move(Playground*);



	virtual void show()=0;

	int getPosition(Playground*);	


};


#endif