#include "Computer.h"
#include "Soldier.h"
#include "Archer.h"
#include "Catapult.h"

Computer::Computer (bool i) : AbsPlayer(i) {

    if (i) { m_name = "COM1"; } else { m_name = "COM2"; }
}

Computer::~Computer() {}

//Achat d'unité pour le computer
void Computer::achatUnit (Playground* p) {

    if (this->getGolds() >= 20){
        this->setGolds((this->getGolds())-20); 
        this->addUnit(p,new Catapult(this->isLeft()));
        std::cout << this->getName() << " has purchased a brand new catapult." << std::endl;
    } else {
        if (this->getGolds() >=12){
            this->setGolds((this->getGolds())-12); 
            this->addUnit(p,new Archer(this->isLeft()));
            std::cout << this->getName() << " has purchased a brand new Archer." << std::endl;
        } else {
            if (this->getGolds() >=10){
                this->setGolds((this->getGolds())-10);
                this->addUnit(p,new Soldier(this->isLeft()));
                std::cout << this->getName() << " has purchased a brand new Soldier." << std::endl;
            } else {
                std::cout << this->getName() << " is too poor to buy anything." << std::endl;
            }
        }
    }
}
        
                        
    

