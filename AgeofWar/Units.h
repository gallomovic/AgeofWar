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
	int m_portee;


	bool A1 = false; //a fait son action 1, pas besoin pour action 2 et 3


public:

	Units();
	Units(int,int,int,int,std::string);
	virtual ~Units();


	/*
	int getHP() const;
	int getAP() const;
	int getPrice() const;
	void setHP(int);
	*/

	virtual void attack(Entite*) const; //Attaque sur une Entite (PlayerBase) => Inutile pour l'instant car PlayerBase est de type Units
	virtual void attack(Playground*,Units*) const;  // Attaque la cible passée en paramètre, la cible est retirée après l'attaque si elle est dead

	virtual Entite* canAttack(Playground*);  // Renvoie


	void move(Playground*);  // déplace l'unité d'1 case

	//virtual void show()=0;


	int getPosition(Playground*); // retourne l'indice de la position de l'unité


};


#endif