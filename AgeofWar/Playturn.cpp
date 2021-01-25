//Pas besoin de header vu que playturn n'a que des fonctions qu'on appelera dans le main
#include "Playground.h"
#include "Player.h"

//Achat d'unité pour le joueur
void achatUnit (Playground* p, Player *pl) {

        if ((pl->isLeft() && p->isFree(0)) || (!pl->isLeft() && p->isFree(11)) ) {

          std::cout << "What do you want to buy ?     1)Soldier (10g)      2)Archer (12g)          3)Catapult (20g)     4)Skip" << std::endl;

          bool ok;
          do {
          int choice;
          ok = false;
          std::cin >> choice;

                switch (choice) { //CHECKER LE PRIX ET LE SOUSTRAIRE
                        case 1 : if (pl->getGolds() >= 10){
                                        pl->setGolds((pl->getGolds())-10); pl->addUnit(p,new Soldier(pl->isLeft())); ok=true; break;
                                } else {
                                        std::cout << "Not enough gold to buy a soldier" << std::endl; break;
                                }
                        
                        case 2 : if (pl->getGolds() >=12){
                                        pl->setGolds((pl->getGolds())-12); pl->addUnit(p,new Archer(pl->isLeft())); ok=true; break;
                                } else {
                                        std::cout << "Not enough gold to buy an archer" << std::endl; break;
                                }
                        case 3 : if (pl->getGolds() >=20){
                                        pl->setGolds((pl->getGolds())-20); pl->addUnit(p,new Catapult(pl->isLeft())); ok=true; break;
                                } else {
                                        std::cout << "Not enough gold to buy a catapult" << std::endl; break;
                                }
                        case 4 : ok=true; break;
                        default : std::cout << "Please enter a valid value (1, 2 or 3)" << std::endl;
                }

          } while (!ok);
        
        } 
        else {

                std::cout << "Player can't buy. Continuing to next turn." << std::endl;

        }
}

void Playturn(Playground* p, Player *pl) {

        pl->sortVectorUnit();
        
        for (Units* u : pl->getUnits()) {
                u->action1(p);
        }

        for (int i = pl->getUnits().size() ; i >=0 ; i--) {
                pl->getUnits().at(i)->action2(p);
        }

        for (int i = pl->getUnits().size() ; i >=0 ; i--) {
                pl->getUnits().at(i)->action3(p);
        }

        achatUnit(p,pl);
}





