#ifndef ENTITY_H
#define ENTITY_H
#include <SFML/Window.hpp>
#include "SFML/Graphics.hpp"

class Entity
{

private:
    int health;
    bool isAlive = true;
    int speed;
    int id;

public:
    Entity();
    Entity(int startingHealth, int startingSpeed, int entityID);
    void renderEntity(sf::RenderWindow &gameWindow, sf::Sprite entitySprite);
    sf::Sprite createEntity(sf::RenderWindow &gameWindow, sf::Texture &texture);
    sf::Sprite entitySprite;
    void die();
    void shoot();
};

#endif