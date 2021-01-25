#ifndef DEF_UNITS
#define DEF_UNITS

#include <iostream>
#include <stdlib.h>
#include <string>

#include "Entite.h"

class Playground;

class Units : public Entite {

protected:

	//int m_hp;  // Health Points
	int m_ap;	 // Attack Points
	int m_price;
	int m_portee;

	int m_pos;


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

	virtual void attackBase(Entite*) const; //Attaque sur une Entite (PlayerBase) => Inutile pour l'instant car PlayerBase est de type Units
	virtual void attack(Playground*,Units*) const;  // Attaque la cible passée en paramètre, la cible est retirée après l'attaque si elle est dead

	virtual Units* canAttack(Playground*);  // Renvoie la première unité attaquable

	virtual void action1(Playground*);
	virtual void action2(Playground*);
	virtual void action3(Playground*);

	int getPos() const { return m_pos; }
	void setPos(int p) { m_pos=p; }

	void move(Playground*);  // déplace l'unité d'1 case

	//virtual void show()=0;


	int getPosition(Playground*); // retourne l'indice de la position de l'unité


};


#endif