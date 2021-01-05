#ifndef DEF_ENTITE
#define DEF_ENTITE
#include <iostream>

class Entite
{
private:


public:
    Entite(){    };
    ~Entite(){
        delete this;
    };

    int getPosition();
    
};

#endif
