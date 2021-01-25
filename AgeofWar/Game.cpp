#include "Game.h"


Game::Game() {

    Playground *p = new Playground();
    
    PlayerBase *pbl = new PlayerBase();
    p->PlayerBaseL = pbl;

    PlayerBase *pbr = new PlayerBase();
    p->PlayerBaseR = pbr;

	Player *p1 = new Player(true);
	Player *p2 = new Player(false);

    this->m_P = p;
    this->m_PR = p1;
    this->m_PL = p2;

}

Game::~Game() {}
    
bool Game::win() {

    if (this->m_P->PlayerBaseR->getHP() <= 0) {
        std::cout << "VICTOIRE DU JOUEUR 1 !" << std::endl;
        return true;
    }
    if (this->m_P->PlayerBaseL->getHP() <= 0) {
        std::cout << "VICTOIRE DU JOUEUR 2 !" << std::endl;
        return true;
    }
    return false;

}

void Game::play() {

    this->m_P->printlogo();

    int nbTours = 1;

    this->m_P->printPG(this->m_PL,this->m_PR);


    do {

        std::cout << "               Turn Number : " << nbTours << "/200" << std::endl << std::endl;

        
        this->m_PL->giveGolds(8);
        Playturn(this->m_P, this->m_PL);

        this->m_P->printPG(this->m_PL,this->m_PR);

        this->m_PL->giveGolds(8);
        Playturn(this->m_P, this->m_PR);

        this->m_P->printPG(this->m_PL,this->m_PR);

        nbTours++;
        if (nbTours>200) {
            std::cout << "  Turn Number Limit reached. Game Over..." << std::endl;
            break;
        }

    } while (!this->win());


}
