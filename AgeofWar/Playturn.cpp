//Pas besoin de header vu que playturn n'a que des fonctions qu'on appelera dans le main
#include "Playground.h"
#include "Player.h"

/*
void Playturn(Playground* p, Player *pl) {

        //TODO :)
        //si p1 action 1, 2 et 3 ok (+ nvlles unités) --> p2 et inversement
        



}*/

//Achat d'unité pour le joueur
void achatUnit (Playground* p, Player *pl) {

        if ((pl->isLeft() && p->isFree(0)) || (!pl->isLeft() && p->isFree(11)) ) {

          std::cout << "What do you want to buy ?     1)Soldier (10g)      2)Archer (12g)          3)Catapult (20g)" << std::endl;

          bool ok;
          do {
          int choice;
          ok = false;
          std::cin >> choice;

                switch (choice) { //CHECKER LE PRIX ET LE SOUSTRAIRE
                        case 1 : if (pl->getGolds() >= 10){
                                        pl->addUnit(p,new Soldier(),-1); ok=true; break;
                                } else {
                                        std::cout << "Not enough gold to buy a soldier"; break;
                                }
                        
                        case 2 : if (pl->getGolds() >=12){
                                        pl->addUnit(p,new Archer(),-1); ok=true; break;
                                } else {
                                        std::cout << "Not enough gold to buy an archer"; break;
                                }
                        case 3 : if (pl->getGolds() >=20){
                                        pl->addUnit(p,new Catapult(),-1); ok=true; break;
                                } else {
                                        std::cout << "Not enough gold to buy a catapult"; break;
                                }
                        default : std::cout << "Please enter a valid value (1, 2 or 3)" << std::endl;
                }

          } while (!ok);
        
        } else {

                std::cout << "Player can't buy. Continuing to next turn." << std::endl;

        }
}



// TODO : Méthodes d'atk et retourner les symbol pour le joueur droit