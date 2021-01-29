#include "Game.h"
#include "Player.h"
#include "Computer.h"
#include "Archer.h"
#include "Catapult.h"
#include "Soldier.h"
#include "SuperSoldier.h"

#include <fstream>

Game::Game() {}

Game::Game(int i) { //i indique le mode souhaité , 1=PvP, 2=PvC, 3=CvC

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
        std::cout << std::endl << "              VICTOIRE DE " << this->m_PL->getName() << " ! Press Enter to get back to main menu.." << std::endl << std::endl;
        std::cin.clear();
        std::cin.ignore(1000,'\n');
        std::cin.get();
        return true;
    }
    if (this->m_P->PlayerBaseL->getHP() <= 0) {
        std::cout << std::endl << "              VICTOIRE DE " << this->m_PR->getName()  << " ! Press Enter to get back to main menu.." << std::endl << std::endl;
        std::cin.clear();
        std::cin.ignore(1000,'\n');
        std::cin.get();
        return true;
    }
    return false;

}

void Game::play() {

    do {

        system("clear");


        std::cout << std::endl << "                                 Turn Number : " << nbTurns << "/200" << std::endl << std::endl;
        
        Playturn(this->m_P, this->m_PL, nbTurns);

        this->m_P->printPG(this->m_PL,this->m_PR);

        if (this->win()) {break;}

        if (this->m_PL->getGolds()>=10 && this->m_P->isFree(0) ) {
            this->m_PL->achatUnit(this->m_P);
            std::cout << " Press Enter to continue" << std::endl;
        } else {
            std::cout << this->m_PL->getName() << " can't buy... Skipping buying phase... \n Press Enter to continue" << std::endl;
        }

        char q;

        std::cin.clear();
        std::cin.ignore(5,'\n');
        std::cin.get(q);
        
        while (!(q =='\n')) {
            std::cin.clear();
            std::cin.ignore(5,'\n');
            std::cout << "Please press Enter" << std::endl;
            std::cin.get(q);
        }

        system("clear");

        std::cout << std::endl << "                                 Turn Number : " << nbTurns << "/200" << std::endl << std::endl;

        Playturn(this->m_P, this->m_PR, nbTurns);

        this->m_P->printPG(this->m_PL,this->m_PR);

        if (this->win()) {break;}

        if (this->m_PR->getGolds()>=10 && this->m_P->isFree(11) ) {
            this->m_PR->achatUnit(this->m_P);
        } else {
            std::cout << this->m_PR->getName() << " can't buy... Skipping buying phase... " << std::endl;
        }

        nbTurns++;

        if (nbTurns>200) {
            std::cout << std::endl << "  Turn Number Limit reached. Game Over..." << std::endl;
            break;
        }

        
        std::cout << " Press Enter to continue, enter 'q' to end the game , enter 's' to save game" << std::endl;
        
        std::cin.clear();
        std::cin.ignore(5,'\n');
        std::cin.get(q);
        
        while (!(q =='\n' || q =='q' || q =='s')) {
                std::cin.clear();
                std::cin.ignore(5,'\n');
                std::cout << "Please enter a valid value ('', 'q', or 's')" << std::endl;
                std::cin.get(q);
        }
        
        if (q == 'q'){
            break;
        } 
        if (q == 's'){
            this->save();
            break;
        }


    } while (true);

}

void Game::save() {

    std::ofstream sf;
    sf.open("save.txt", std::ofstream::out | std::ofstream::trunc); //ouvre save.txt et supprime son contenu

    //Nombre de tours
    sf << nbTurns+1 << "\n";

    //Infos joueur de gauche
    sf << m_PL->getName() << "\n";
    sf << m_PL->getGolds() << "\n";

    //Infos joueur de droite
    sf << m_PR->getName() << "\n";
    sf << m_PR->getGolds() << "\n";

    //Infos Terrain de jeu
    sf << std::to_string(m_P->PlayerBaseL->getHP()) << "\n"; //PV base a gauche
    sf << std::to_string(m_P->PlayerBaseR->getHP()) << "\n"; //PV base a droite

    for (int i = 0 ; i<(int)m_P->pg.size() ; i++) { //Infos des unités

        if (m_P->pg[i] != NULL) {

            sf << m_P->pg[i]->getName() << "\n"; //Nom de l'unite
            sf << std::to_string(m_P->pg[i]->getHP()) << "\n"; //PV de l'unite
            sf << std::to_string(m_P->pg[i]->getPos()) << "\n"; //Position de l'unite
            sf << m_P->pg[i]->getOwner()->getName() << "\n"; //Proprietaire de l'unite

        }
    }

    sf.close();
}

bool Game::load() {

    std::string line;
    std::ifstream lf ("save.txt");

    std::ifstream test("save.txt", std::ios::ate); // open at end

    if (test.tellg() == 0) { std::cout << "Save file is empty"; return false;} //Si la sauvegarde est vide

    test.close();

    //Recupere le nombre de tours
    std::getline (lf,line);
    this->nbTurns = std::atoi(line.c_str());

    //Recupere les infos du joueur gauche
    std::getline (lf,line);

    if (line=="Player1") {
        m_PL = new Player(true);
    } else {
        m_PL = new Computer(true);
    }

    std::getline (lf,line);
    m_PL->setGolds(std::stoi(line));

    //Recupere les infos du joueur gauche
    std::getline (lf,line);

    if (line=="Player2") {
        m_PR = new Player(false);
    } else {
        m_PR = new Computer(false);
    }

    std::getline (lf,line);
    m_PR->setGolds(std::stoi(line));

    //Recupere les infos des bases  
    PlayerBase *pbl = new PlayerBase();
    pbl->setPos(0);
   
    PlayerBase *pbr = new PlayerBase();
    pbr->setPos(11);

    std::getline (lf,line);
    pbl->setHP(std::stoi(line));

    std::getline (lf,line);
    pbl->setHP(std::stoi(line));


    
    Playground *p = new Playground();
    p->PlayerBaseR = pbr;
    p->PlayerBaseL = pbl;

    m_P = p;

    //Recupere les infos des unites  
    while (!lf.eof()){
        
        std::getline (lf,line);
        std::string name = line;
        std::getline (lf,line);
        int pv = std::atoi(line.c_str());
        std::getline (lf,line);
        int pos = std::atoi(line.c_str());
        std::getline (lf,line);
        std::string owner = line;

        bool c;

        if (owner=="Player1" || owner=="COM1") {
            c=true;
        } else {
            c=false;
        }

        if (name=="Soldier") { 
            Soldier *u = new Soldier(c); 
            u->setHP(pv);
            if (c) {
                m_PL->addUnit(m_P,u,pos);
            } else {
                m_PR->addUnit(m_P,u,pos);
            }
        }

        if (name=="Archer") { 
            Archer *u = new Archer(c); 
            u->setHP(pv);
            if (c) {
                m_PL->addUnit(m_P,u,pos);
            } else {
                m_PR->addUnit(m_P,u,pos);
            }
        }

        if (name=="Catapult") { 
            Catapult *u = new Catapult(c); 
            u->setHP(pv);
            if (c) {
                m_PL->addUnit(m_P,u,pos);
            } else {
                m_PR->addUnit(m_P,u,pos);
            }
        }

        if (name=="SupSoldier") { 
            SuperSoldier *u = new SuperSoldier(c); 
            u->setHP(pv);
            if (c) {
                m_PL->addUnit(m_P,u,pos);
            } else {
                m_PR->addUnit(m_P,u,pos);
            }
        }  
    }

    lf.close();

    return true;
}