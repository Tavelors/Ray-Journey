#ifndef RUNGAME_H
#define RUNGAME_H

#include "raylib.h"
#include "Player.h"

class Rungame 
{
private:
    bool createPlayer = true;

public:
    Rungame();
    void run();
    

};

#endif