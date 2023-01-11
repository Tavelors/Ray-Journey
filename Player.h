#ifndef PLAYER_H
#define PLAYER_H

#include "raylib.h"
#include <iostream>

class Player
{
private:

    Rectangle rec;

public:
    Player();
    Rectangle createPlayer(int w, int h, int x, int y);
    void movePlayer(float x, float y);
    Rectangle getPlayerPos() {return rec;};

};

#endif