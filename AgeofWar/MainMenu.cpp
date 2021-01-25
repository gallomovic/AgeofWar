#include "MainMenu.hpp"
#include <iostream>
#include <string>
#define couleur(param) printf("\033[%sm",param)

void MainMenu::printMM(){

    couleur("32"); //vert
    couleur("1"); //intensifie la couleur
        


        
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "        ___       _______     _______       ________    ______                         ___       ______";
    std::cout << std::endl;
    std::cout << "       /   \\     |          |              |        |   |           \\            /    /   \\     |      |" ;
    std::cout << std::endl;
    std::cout << "      /_____\\    |    ____  |____          |        |   |____        \\    /\\    /    /_____\\    |______|";
    std::cout << std::endl;
    std::cout << "     /       \\   |       |  |              |        |   |             \\  /  \\  /    /       \\   |    \\";
    std::cout << std::endl;
    std::cout << "    /         \\  |_______|  |_______       |________|   |              \\/    \\/    /         \\  |     \\";

    std::cout << std::endl;
    std::cout << std::endl;

    couleur("36"); //cyan
    couleur("1"); //intensifie la couleur


    std::cout << "_     _      _      _     _    _         _     _    ______   _     _   _      _ \n
                 |\\  /|     /\\     |    |\\   |         |\\  /|   |         |\\   |   |      |\n
                 | \\/ |    /__\\    |    | \\  |         | \\/ |   |___      | \\  |   |      |\n
                 |     |   /    \\   |    |  \\ |         |     |   |         |  \\ |   |      |\n
                 |     |  /      \\  |    |   \\|         |     |   |______   |   \\|   |______|";

    std::cout << std::endl;
    std::cout << std::endl;

    couleur("33");

    std::cout << "       _  _  ____ _        _   ____     _     _   _   ____    ____"
    std::cout << "      |\\ | |__    \\     /   |   __   /_\\  | \\/ | |__        __|"
    std::cout << "      | \\| |____   \\/\\/    |____|  /   \\ |     | |____     |"
    std::cout << "                                                               -"

    std::cout << std::endl;
    std::cout << std::endl;

    couleur("0");

    
    std::string answ;
    std::cin >> answ ;
    if (answ == "y"){
        //start new game
    }
    else if (answ == "n"){
        //load game
    }
    else { std::cout << "Erreur"; }


}