#include "Game.h"


Game::Game() {

    Playground *p = new Playground();
    
    PlayerBase *pbl = new PlayerBase();
    pbl->setPos(0);
    p->PlayerBaseL = pbl;

    PlayerBase *pbr = new PlayerBase();
    pbr->setPos(11);
    p->PlayerBaseR = pbr;

	Player *p1 = new Player(true);
	Player *p2 = new Player(false);

    this->m_P = p;
    this->m_PL = p1;
    this->m_PR = p2;

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

}

void Game::play() {

    this->m_P->printlogo();

    int nbTours = 1;

    this->m_P->printPG(this->m_PL,this->m_PR);


    do {

        std::cout << "               Turn Number : " << nbTours << "/200" << std::endl << std::endl;
        
        Playturn(this->m_P, this->m_PL, nbTours);

        this->m_P->printPG(this->m_PL,this->m_PR);

        if (this->win()) {break;}

        Playturn(this->m_P, this->m_PR, nbTours);

        this->m_P->printPG(this->m_PL,this->m_PR);

        nbTours++;
        if (nbTours>200) {
            std::cout << "  Turn Number Limit reached. Game Over..." << std::endl;
            break;
        }

        std::cout <<  std::endl << "__________________________________________________________________________________________________" << std::endl << std::endl;

    } while (!this->win());


}
