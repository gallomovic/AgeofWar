#include "Game.h"
#include "Player.h"
#include "Computer.h"


Game::Game(int i) {

    Playground *p = new Playground();
    
    PlayerBase *pbl = new PlayerBase();
    pbl->setPos(0);
    p->PlayerBaseL = pbl;

    PlayerBase *pbr = new PlayerBase();
    pbr->setPos(11);
    p->PlayerBaseR = pbr;
    this->m_P = p;

    if (i==2) {

        Player *p1 = new Player(true);
	    Computer *p2 = new Computer(false);
        this->m_PL = p1;
        this->m_PR = p2;

    } else {

        if (i==3) {

            Computer *p1 = new Computer(true);
	        Computer *p2 = new Computer(false);
            this->m_PL = p1;
            this->m_PR = p2;

        } else {

            Player *p1 = new Player(true);
	        Player *p2 = new Player(false);
            this->m_PL = p1;
            this->m_PR = p2;

        }
    }
}

Game::~Game() {}
    
bool Game::win() {

    if (this->m_P->PlayerBaseR->getHP() <= 0) {
        std::cout << "              VICTOIRE DU JOUEUR 1 !" << std::endl << std::endl;
        return true;
    }
    if (this->m_P->PlayerBaseL->getHP() <= 0) {
        std::cout << "              VICTOIRE DU JOUEUR 2 !" << std::endl << std::endl;
        return true;
    }
    return false;

    system("pause");

}

void Game::play() {

    //this->m_P->printlogo();

    int nbTours = 1;

    //this->m_P->printPG(this->m_PL,this->m_PR);


    do {

        system("clear");

        std::cout << std::endl << "                       Turn Number : " << nbTours << "/200" << std::endl << std::endl;
        
        Playturn(this->m_P, this->m_PL, nbTours);

        this->m_P->printPG(this->m_PL,this->m_PR);

        if (this->m_PL->getGolds()>=10 && this->m_P->isFree(0) ) {
                this->m_PL->achatUnit(this->m_P);
        } else {
                std::cout << "P1 can't buy... Skipping buying phase... Press Enter to continue" << std::endl;
        }

        if (this->win()) {break;}

        std::cin.get();
        system("clear");

        std::cout << std::endl << "                       Turn Number : " << nbTours << "/200" << std::endl << std::endl;

        Playturn(this->m_P, this->m_PR, nbTours);

        this->m_P->printPG(this->m_PL,this->m_PR);

        if (this->m_PR->getGolds()>=10 && this->m_P->isFree(11) ) {
                this->m_PR->achatUnit(this->m_P);
        } else {
                std::cout << "P2 can't buy... Skipping buying phase... Press Enter to continue" << std::endl;
        }

        nbTours++;
        if (nbTours>200) {
            std::cout << "  Turn Number Limit reached. Game Over..." << std::endl;
            break;
        }

        //std::cout <<  std::endl << "__________________________________________________________________________________________________" << std::endl << std::endl;
        std::cin.get();
        system("clear");

    } while (!this->win());


}
