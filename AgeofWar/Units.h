#ifndef DEF_UNITS
#define DEF_UNITS

#include <iostream>
#include <stdlib.h>
#include <string>

#include "Entite.h"

class Playground;

class Units : public Entite {

protected:

	int m_ap;	  // Points d'attaque
	int m_price;  // Prix
	int m_portee; // Portée

	int m_pos;

	std::string symbol[4]; // Contient le graphisme de l'unité


	bool A1 = false; //true si l'unite a fait son action 1, pas besoin pour action 2 et 3


public:

	Units();
	Units(int,int,int,int,std::string);
	virtual ~Units();

	//virtual void attack(Playground*,Entite*) const; //Attaque sur une Entite (PlayerBase) => Inutile pour l'instant car PlayerBase est de type Units
	virtual void attack(Playground*,Units*);  // Attaque la cible passée en paramètre, la cible est retirée après l'attaque si elle est morte

	virtual Units* canAttack(Playground*);  // Renvoie la première unité attaquable (y compris la base adverse) et NULL sinon

	virtual void action1(Playground*);
	virtual void action2(Playground*);
	virtual void action3(Playground*);

	int getPos() const { return m_pos; }
	void setPos(int p) { m_pos=p; }

	void move(Playground*);  // déplace l'unité d'1 case

	virtual void show() {}


	int getPosition(Playground*); // retourne l'indice de la position de l'unité

	std::string getSymbol(int i) { return this->symbol[i]; }

};


#endif