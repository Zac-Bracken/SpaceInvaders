#include "public/player.h"
#include <iostream>

Player::Player(int playerLives, int startingHealth, int startingSpeed, int entityID) : Entity(startingHealth, startingSpeed, entityID)
{
    lives = playerLives;

    if (!playerTexture.loadFromFile("../../assets/spaceinvadership.png"))
    {
        std::cout << "Could not load sprite texture" << std::endl;
    }
    playerSprite.setTexture(playerTexture);
    playerSprite.setScale(100 / playerSprite.getLocalBounds().width,
                          100 / playerSprite.getLocalBounds().height);
}

void Player::move(sf::RenderWindow &gameWindow, float deltaTime)
{
    ;
}

void Player::moveLeft(sf::RenderWindow &gameWindow, float deltaTime)
{
    playerSprite.move(-400.f * deltaTime, 0);
    std::cout << "Left" << std::endl;
}

void Player::moveRight(sf::RenderWindow &gameWindow, float deltaTime)
{
    playerSprite.move(400.f * deltaTime, 0);
    std::cout << "Right" << std::endl;
}

sf::Sprite Player::getSprite()
{
    return playerSprite;
}

void Player::setLocation(float x, float y)
{
    playerSprite.setOrigin(playerSprite.getLocalBounds().width / 2, playerSprite.getLocalBounds().height);
    playerSprite.setPosition(x, y);
}
