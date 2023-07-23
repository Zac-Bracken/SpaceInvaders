#ifndef PLAYER_H
#define PLAYER_H

#include "public/entity.h"

class Player : public Entity
{

private:
    int lives;

public:
    Player();
    Player(int lives, int startingHealth, int startingSpeed, int entityID);
    void moveLeft();
    void moveRight();
};

#endif