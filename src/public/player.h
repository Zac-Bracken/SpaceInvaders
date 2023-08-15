#ifndef PLAYER_H
#define PLAYER_H

#include "public/entity.h"

class Player : public Entity
{

private:
    sf::Sprite playerSprite;
    int lives;
    sf::Texture playerTexture;

public:
    Player();
    Player(int lives, int startingHealth, int startingSpeed, int entityID);
    void moveLeft(sf::RenderWindow &gameWindow, float deltaTime);
    void moveRight(sf::RenderWindow &gameWindow, float deltaTime);
    void move(sf::RenderWindow &gameWindow, float deltaTime);
    void setLocation(float x, float y);
    sf::Sprite getSprite();
};

#endif