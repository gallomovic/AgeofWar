//Pas besoin de header vu que playturn n'a que des fonctions qu'on appelera dans le main
#include "Playground.h"
#include "AbsPlayer.h"


void Playturn(Playground* p, AbsPlayer *pl, int n) {

        std::cout << "          " << pl->getName() << " turn : " << std::endl << std::endl;

        if (n!=1) { pl->giveGolds(8); }

        pl->sortVectorUnit();

        //if (!pl->isLeft()) { std::reverse(pl->getUnits().begin(), pl->getUnits().end()); }
        
        for (Units* u : pl->getUnits()) {
                u->action1(p);
        }

        for (int i = pl->getUnits().size()-1 ; i >=0 ; i--) {
                pl->getUnits().at(i)->action2(p);
        }

        for (int i = pl->getUnits().size()-1 ; i >=0 ; i--) {
                pl->getUnits().at(i)->action3(p);
        }

}


