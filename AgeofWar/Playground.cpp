#include "Playground.h"
#include <iostream>
#include <vector>
#include <string>

void print10(std::string s) {  //Print la string contenue dans 10 charactères 

        int n =  10-s.size();

        for (int i=0; i< (int)n/2 ; i++) {
                std::cout << " ";
                n--;
        }

        std::cout << s;

        while (n>0) {
                std::cout << " ";
                n--;
        }
}

void Playground::printlogo(){
        
        std::cout << std::endl;
        std::cout << std::endl;

        std::cout<< "        ___       _______     _______       ________    ______                         ___       ______";
        std::cout << std::endl;
        std::cout<< "       /   \\     |          |              |        |   |           \\            /    /   \\     |      |" ;
        std::cout << std::endl;
        std::cout<< "      /_____\\    |    ____  |____          |        |   |____        \\    /\\    /    /_____\\    |______|";
        std::cout << std::endl;
        std::cout<< "     /       \\   |       |  |              |        |   |             \\  /  \\  /    /       \\   |    \\";
        std::cout << std::endl;
        std::cout<< "    /         \\  |_______|  |_______       |________|   |              \\/    \\/    /         \\  |     \\" ;

        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        
}

void Playground::printPG(Player* p1, Player *p2){


        std::cout << std::endl;
        std::cout << std::endl;

        //affichage des infos du jeu 
        
        std::cout << "Joueur 1 : " << std::endl;


        std::cout << "Points de vie de la base :" << pg[0]->getHP()
        << std::endl;

        std::cout << "Nombre de pièces :" << p1->getGolds()
        << std::endl;
       
        
        std::cout << "__________________________" << std::endl;
        std::cout << std::endl;


        std::cout << "Joueur 2 : " << std::endl;

        std::cout << "Points de vie de la base :" << pg[pg.size()-1]->getHP()
        << std::endl;

        std::cout << "Nombre de pièces :" << p2->getGolds()
        << std::endl;

        
        std::cout << "__________________________" << std::endl;


        //affichage du playground

        //idée si ça se décale quand on affichera les unités
        // faire un vecteur de matrices d'affichage des unités



        //bases
        std::cout << " ___    ___                                                                                                               ___    ___";
        std::cout << std::endl;
        std::cout << "|   |  |   |                                                                                                             |   |  |   |" ;
        std::cout << std::endl;
        std::cout << "|   |__|   |_____________________________________________________________________________________________________________|   |__|   |" ;
        std::cout << std::endl;



        std::cout << "|          |";
        //ligne du dessus
        for (int i = 0; i < 11; i++){
                std::cout << "          |";
        }
        //std::cout << "|          |";

        std::cout << std::endl;
        
        //if case non vide
        //nom de l'entité i
        for (int i = 0; i <= 12; i++){
                        std::cout << "|";
                        if (!this->isFree(i)) {

                                print10(pg[i]->m_name);
                        } else {

                                print10(" ");
                        }
                        //chaque entité (unité ou base) a un symbole dédié qu'on déterminera
        }
        std::cout << std::endl;

        //HP de l'entité i
        for (int i = 0; i <= 12; i++){
                std::cout << "|";
                if (!this->isFree(i)) { 
                
                        print10( std::to_string(pg[i]->getHP()) ) ;
                        
                } else {

                        print10(" ");
                }
        }
        std::cout << std::endl;

        //symbole de l'entité i
        for(int j=0; j<4; j++) {      // Affichage par ligne
                
                for (int i = 0; i <= 12; i++) {

                        std::cout << "|";

                        if (!this->isFree(i)) {

                             std::cout << pg[i]->symbol[j];  // Le bug venait du fait que yavait symbol dans Entite.h et Units.h et que le tableau etait de dim 2

                        } else {
                                print10(" ");
                        }

                }
                std::cout << std::endl;
        }
        

        //Actions de l'entité i
        for (int i = 0; i <= 11; i++){
                std::cout << "|__________";
                //std::cout<< Entité.actions
                
        }
        std::cout << "|" << std::endl;




        //if case vide
        //for (int i = 0; i <= 12; i++){
        //        std::cout << "|     ";
        //}
        

        std::cout << std::endl;
        std::cout << std::endl;




}

bool Playground::isFree(int pos) {
        return (this->pg[pos]==NULL) ? true : false;
}




