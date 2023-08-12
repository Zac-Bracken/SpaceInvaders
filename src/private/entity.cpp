#include "public/entity.h"
#include "SFML/Graphics.hpp"
#include <iostream>

Entity::Entity(int startingHealth, int startingSpeed, int entityID)
{
    health = startingHealth;
    speed = startingHealth;
    id = entityID;
}

sf::Sprite Entity::createEntity(sf::RenderWindow &gameWindow, sf::Texture &texture)
{
    sf::Sprite entitySprite;
    entitySprite.setTexture(texture);
    entitySprite.setScale(100 / entitySprite.getLocalBounds().width,
                          100 / entitySprite.getLocalBounds().height);
    entitySprite.setPosition((gameWindow.getSize().x - entitySprite.getGlobalBounds().width) / 2,
                             (gameWindow.getSize().y - entitySprite.getGlobalBounds().height) / 2);

    return entitySprite;
}
void Entity::renderEntity(sf::RenderWindow &gameWindow, sf::Sprite entitySprite)
{
    gameWindow.draw(entitySprite);
}

void Entity::die()
{
    ;
}