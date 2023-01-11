#include "Player.h"

Player::Player() {
    
}

Rectangle Player::createPlayer(int w, int h, int x, int y) {   
    rec.width = w;
    rec.height = h;
    rec.x = x;
    rec.y = y;
    return rec;
}

void Player::movePlayer(float x, float y) {
    rec.y += y;
    rec.x += x;
}