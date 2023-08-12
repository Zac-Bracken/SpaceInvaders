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

void Player::renderPlayer(sf::RenderWindow gameWindow)
{
    sf::Texture texture;
    if (!texture.loadFromFile("../../assets/xwing.png", sf::IntRect(10, 10, 32, 32)))
    {
        // error...
    }
    sf::Sprite sprite;
    sprite.setTexture(texture);
    gameWindow.draw(sprite);
}
