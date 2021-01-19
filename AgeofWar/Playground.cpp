#include "Playground.hpp"
#include <iostream>


void Playground::printPG(){


        std::cout << std::endl;
        std::cout << std::endl;

        std::cout << "----------------------------------------------------------------------------------------------------------------------" << std::endl;
        std::cout << "----------------------------------------------------------------------------------------------------------------------" << std::endl;
        std::cout << "----------------------------------------------------------------------------------------------------------------------" << std::endl;
        std::cout << "----------------------------------------- AGE OF WAR VERSION BASTIEN ET ENZO -----------------------------------------" << std::endl;
        std::cout << "----------------------------------------------------------------------------------------------------------------------" << std::endl;
        std::cout << "----------------------------------------------------------------------------------------------------------------------" << std::endl;
        std::cout << "----------------------------------------------------------------------------------------------------------------------" << std::endl;
        
        std::cout << std::endl;
        
        //affichage des infos du jeu 
        
        std::cout << "Joueur 1 : " << std::endl;


        std::cout << "Points de vie de la base :" 
        // << HP base Joueur 1
        << std::endl;

        std::cout << "Nombre de pièces :" 
        // << nb pieces Joueur 1
        << std::endl;
       
        
        std::cout << "---------------------------" << std::endl;

        std::cout << "Joueur 2 : " << std::endl;

        std::cout << "Points de vie de la base :" 
        // << HP base Joueur 2
        << std::endl;

        std::cout << "Nombre de pièces :" 
        // << nb pieces Joueur 2
        << std::endl;

        
        std::cout << "---------------------------" << std::endl;


        //affichage du playground

        //bases
        std::cout << "-----   ----                                                                                                             -----   ----";
        std::cout << std::endl;
        std::cout << "|   |  |   |                                                                                                             |   |  |   |" ;
        std::cout << std::endl;
        
        //ligne du dessus
        for (int i = 0; i < 12; i++){
                std::cout << "-----------";
        }

        std::cout << std::endl;
        
        //if case non vide
        //symbole de l'entité i
        for (int i = 0; i <= 12; i++){
                        std::cout << "|      ";
                        //std::cout<< Entité.symbole
                        //chaque entité (unité ou base) a un symbole dédié qu'on déterminera
                        std::cout << "    ";
        }
        std::cout << std::endl;

        //HP de l'entité i
        for (int i = 0; i <= 12; i++){
                std::cout << "|      ";
                //std::cout<< Entité.HP
                std::cout << "    ";
        }
        std::cout << std::endl;

        //Actions de l'entité i
        for (int i = 0; i <= 12; i++){
                std::cout << "|      ";
                //std::cout<< Entité.actions
                std::cout << "    ";
        }
        std::cout << std::endl;


        //if case vide
        //for (int i = 0; i <= 12; i++){
        //        std::cout << "|     ";
        //}
        


        //ligne du dessous
        for (int i = 0; i < 12; i++){
                std::cout << "-----------";
        }
        std::cout << std::endl;



}

bool Playground::isFree(int pos) {
        ( pg[pos] == nullptr ) ? true : false;
} 


