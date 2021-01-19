#include "Playground.hpp"
#include <iostream>
#include <vector>
#include <string>


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
       
        
        std::cout << "__________________________" << std::endl;

        std::cout << "Joueur 2 : " << std::endl;

        std::cout << "Points de vie de la base :" 
        // << HP base Joueur 2
        << std::endl;

        std::cout << "Nombre de pièces :" 
        // << nb pieces Joueur 2
        << std::endl;

        
        std::cout << "__________________________" << std::endl;


        //affichage du playground

        //idée si ça se décale quand on affichera les unités
        // faire un vecteur de matrices d'affichage des unités
        //  O
        // /|\|)->
        // / \.

        //  \O
        // __\_
        //|____|
        // O   O

        //  O
        // /|\/
        // / \.

        //  _
        //  O
        // /|\/
        // / \.




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


