#include "public/invader.h"
#include <iostream>

Invader::Invader(int worthPointsValue, int startingHealth, int startingSpeed, int entityId)
    : Entity(startingHealth, startingSpeed, entityId)
{
    // Set values based on provided parameters
    worthPoints = worthPointsValue;
}

void Invader::move()
{
    // Implement invader movement logic here
}

void Invader::dropDown()
{
    // Implement invader dropping logic here
}

void Invader::setSprite(sf::Texture &texture, float invaderX, float invaderY)
{
    invaderSprite.setTexture(texture);
    invaderSprite.setScale(100 / invaderSprite.getLocalBounds().width,
                           100 / invaderSprite.getLocalBounds().height);
    std::cout << invaderX << std::endl;
    invaderSprite.setPosition(invaderX, invaderY);
}
sf::Sprite Invader::getSprite()
{
    return invaderSprite;
}
