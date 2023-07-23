#include "public/player.h"

Player::Player(int playerLives, int startingHealth, int startingSpeed, int entityID) : Entity(startingHealth, startingSpeed, entityID)
{
    lives = playerLives;
}

void Player::moveLeft()
{
    ;
}

void Player::moveRight()
{
    ;
}
