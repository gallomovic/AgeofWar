#include "Player.h"
#include "Soldier.h"
#include "Archer.h"
#include "Catapult.h"

Player::Player (bool i) : AbsPlayer(i) {

        if (i) { m_name = "Player1"; } else { m_name = "Player2"; }
        
}

Player::~Player() {}

//Achat d'unité pour le joueur
void Player::achatUnit (Playground* p) {


        std::cout << this->getName() << ", what do you want to buy ?     1)Soldier (10g)      2)Archer (12g)          3)Catapult (20g)     4)Skip" << std::endl;

        bool ok;
          
        do {

                int choice;
                ok = false;
                
                while (!(std::cin >> choice)) {
                        std::cin.clear();
                        std::cin.ignore(5,'\n');
                        std::cout << "Please enter a valid value (1, 2, 3 or 4)" << std::endl;
                }

                switch (choice) { //CHECKER LE PRIX ET LE SOUSTRAIRE
                        case 1 : if (this->getGolds() >= 10){
                                        this->setGolds((this->getGolds())-10); this->addUnit(p,new Soldier(this->isLeft())); ok=true; break;
                                } else {
                                        std::cout << "Not enough gold to buy a soldier" << std::endl; break;
                                }
                                
                        case 2 : if (this->getGolds() >=12){
                                        this->setGolds((this->getGolds())-12); this->addUnit(p,new Archer(this->isLeft())); ok=true; break;
                                } else {
                                        std::cout << "Not enough gold to buy an archer" << std::endl; break;
                                }
                        case 3 : if (this->getGolds() >=20){
                                        this->setGolds((this->getGolds())-20); this->addUnit(p,new Catapult(this->isLeft())); ok=true; break;
                                } else {
                                        std::cout << "Not enough gold to buy a catapult" << std::endl; break;
                                }
                        case 4 : ok=true; break;
                        default : std::cout << "Please enter a valid value (1, 2, 3 or 4)" << std::endl;
                }

        } while (!ok);
 
}
