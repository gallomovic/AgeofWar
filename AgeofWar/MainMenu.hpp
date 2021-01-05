#ifndef DEF_MAINMENU
#define DEF_MAINMENU
#include <iostream>

class MainMenu
{
private:


public:
    MainMenu(){    };
    ~MainMenu(){
        delete this;
    };

    void printMM();
};

#endif
