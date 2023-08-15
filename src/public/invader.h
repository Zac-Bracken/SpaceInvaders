#ifndef INVADER_H
#define INVADER_H
#include "public/entity.h"

class Invader : public Entity
{

private:
    int worthPoints;
    sf::Sprite invaderSprite;

public:
    Invader();
    Invader(int worthPointsValue, int startingHealth, int startingSpeed, int entityID);
    void move();
    void dropDown();
    sf::Sprite createEntity(sf::RenderWindow &gameWindow, sf::Texture &texture);
    void setSprite(sf::Texture &texture, float invaderX, float invaderY);
    sf::Sprite getSprite();
};

#endif