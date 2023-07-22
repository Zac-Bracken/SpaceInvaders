#ifndef PLAYER_H
#define PLAYER_H

#include "public/entity.h"

class Player : public Entity
{

private:
    int lives;

public:
    Player();
    void moveLeft();
    void moveRight();
}