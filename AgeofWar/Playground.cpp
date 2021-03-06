#include "Playground.h"
#include <iostream>
#include <vector>
#include <string>
#define couleur(param) printf("\033[%sm",param)

/*30 Noir 31 Rouge 32 Vert 33 Jaune 34 Bleu 35 Magenta 36 Cyan 37 Blanc */ //police
/* 40 Noir 41 Rouge 42 Jaune 43 Vert 44 Bleu 45 Magenta 46 Cyan 47 Blanc */ //fond

Playground::Playground() {}

Playground::~Playground() {}

void print10(std::string s) {  //Print la string contenue dans 10 charactères 

        int n =  10-s.size();

        for (int i=0; i < (int)n/2 ; i++) {
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

        

        couleur("37"); //vert
        couleur("1"); //intensifie la couleur
        


        
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

        couleur("0"); //reinitialisation de la couleur
        
}

void Playground::printPG(AbsPlayer* p1, AbsPlayer *p2){


        std::cout << std::endl;
        std::cout << std::endl;

        //affichage des infos du jeu 

        couleur("31");//rouge
        couleur("1");
        
        std::cout << "  " << p1->getName() << std::endl;


        std::cout << " Base HP : " << this->PlayerBaseL->getHP() << std::endl;

        std::cout << " Golds   : " << p1->getGolds() << std::endl;

        couleur("0");
       
        
        std::cout << "______________________________" << std::endl;
        std::cout << std::endl;

        couleur("34");//bleu
        couleur("1");

        std::cout << "  " << p2->getName() << std::endl;

        std::cout << " Base HP : " << this->PlayerBaseR->getHP() << std::endl;

        std::cout << " Golds   : " << p2->getGolds() << std::endl;

        couleur("0");

        
        std::cout << "__________________________" << std::endl;


        //affichage du playground

        //idée si ça se décale quand on affichera les unités
        // faire un vecteur de matrices d'affichage des unités


        
        couleur("36"); //bleu ciel
        couleur("1");

        //bases
        std::cout << " ___    ___                                                                                                               ___    ___";
        std::cout << std::endl;
        std::cout << "|   |  |   |                                                                                                             |   |  |   |" ;
        std::cout << std::endl;
        std::cout << "|   |__|   |_____________________________________________________________________________________________________________|   |__|   |" ;
        std::cout << std::endl;


//ligne du dessus

        std::cout << "|";
        print10(p1->getName());
        std::cout << "|";
        
        for (int i = 0; i < 10; i++){
                std::cout << "          |";
        }

        print10(p2->getName());
        std::cout << "|";

        std::cout << std::endl;

        couleur("0");
        
        
        //nom de l'entité i
        for (int i = 0; i < 12; i++){
                couleur("36");
                couleur("1");
                std::cout << "|";
                couleur("0");
                if (!this->isFree(i)) {
                        if( ((pg[i]->getOwner() == p1) && (p1->isLeft())) ||
                                ((pg[i]->getOwner() == p2) && (p2->isLeft())) )
                        {
                                couleur("31"); //rouge
                                couleur("1");
                                print10(pg[i]->getName());
                                couleur("0");
                        }
                        else {
                                couleur("34"); //bleu
                                couleur("1");
                                print10(pg[i]->getName());
                                couleur("0");
                        }
                                
                } else {

                                print10(" ");
                }
                //chaque entité (unité ou base) a un symbole dédié qu'on déterminera
        }
        couleur("36");
        couleur("1");
        std::cout << "|" << std::endl;
        couleur("0");

        //HP de l'entité i
        for (int i = 0; i < 12; i++){
                couleur("36");
                couleur("1");
                std::cout << "|";
                couleur("0");
                if (!this->isFree(i)) { 

                        if( ((pg[i]->getOwner() == p1) && (p1->isLeft())) ||
                                ((pg[i]->getOwner() == p2) && (p2->isLeft())) )
                        {
                                couleur("31"); //rouge
                                couleur("1");
                                print10( "HP:" + std::to_string(pg[i]->getHP()) ) ;
                                couleur("0");
                        }
                        else {
                                couleur("34"); //bleu
                                couleur("1");
                                print10( "HP:" + std::to_string(pg[i]->getHP()) ) ;
                                couleur("0");
                        }
                        
                } else {

                        print10(" ");
                }
        }
        couleur("36");
        couleur("1");
        std::cout << "|" << std::endl;
        couleur("0");

        //symbole de l'entité i
        for(int j=0; j<4; j++) {      // Affichage par ligne
                
                for (int i = 0; i < 12; i++) {

                        couleur("36");
                        couleur("1");
                        std::cout << "|";
                        couleur("0");
                        if (!this->isFree(i)) {

                                if( ((pg[i]->getOwner() == p1) && (p1->isLeft())) ||
                                ((pg[i]->getOwner() == p2) && (p2->isLeft())) )
                                {       
                                        couleur("31"); //rouge
                                        couleur("1");
                                        print10( pg[i]->getSymbol(j) ) ;
                                        couleur("0");
                                }
                                else {
                                        couleur("34"); //bleu
                                        couleur("1");
                                        print10( pg[i]->getSymbol(j)) ;
                                        couleur("0");
                                }

                             //std::cout << pg[i]->symbol[j];  // Le bug venait du fait que yavait symbol dans Entite.h et Units.h et que le tableau etait de dim 2

                        } else {
                                print10(" ");
                        }

                }
                couleur("36");
                couleur("1");
                std::cout << "|" << std::endl;
                couleur("0");
        }
        
        couleur("36");
        couleur("1");
        //Actions de l'entité i
        for (int i = 0; i <= 11; i++){
                std::cout << "|__________";
                //std::cout<< Entité.actions
                
        }
        std::cout << "|" << std::endl;
        

        //Num de case
        for (int i = 0; i <= 11; i++){
                std::cout << "|";
                print10(std::to_string(i+1));
        }
        std::cout << "|" << std::endl;


        //if case vide
        //for (int i = 0; i <= 12; i++){
        //        std::cout << "|     ";
        //}
        
        couleur("0");

        std::cout << std::endl;
        std::cout << std::endl;




}

bool Playground::isFree(int pos) {
        return (this->pg[pos]==NULL) ? true : false;
}




