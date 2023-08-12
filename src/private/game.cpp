#include "public/game.h"
#include "SFML/Graphics.hpp"
#include <iostream>

Game::Game()
{
    ;
}

void Game::setLevel()
{
    ;
}

void Game::setScore()
{
    ;
}

void Game::setGameState()
{
    ;
}

void Game::startGame()
{
    ;
}

void Game::removeEntity()
{
    ;
}

void Game::addEntity()
{
    ;
}

void Game::loadingScreen()
{
    ;
}

void Game::gameRun()
{

    // game loop

    sf::RenderWindow window(sf::VideoMode(500, 500), "My window");
    window.setFramerateLimit(60);
    // spawn player
    Player player(2, 2, 3, 4);
    sf::Sprite playerSprite;
    sf::Event event;
    sf::Texture texture;
    if (!texture.loadFromFile("../../assets/xwing.png"))
    {
        std::cout << "Could not load sprite texture" << std::endl;
    }
    playerSprite = player.createEntity(window, texture);

    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        while (window.pollEvent(event))
        {
            // TO DO ---- if game wants to render entities i.e startup, next level, run draw entities which will clear screen and take in all the entities required for that game level
            switch (event.type)
            {
            case sf::Event::Closed:
                window.close();
                break;

            case sf::Event::KeyPressed:
                switch (event.key.scancode)
                {
                case sf::Keyboard::Scan::Left:
                    // run player left function
                    std::cout << "Left" << std::endl;
                    break;

                case sf::Keyboard::Scan::Right:
                    // run player right function
                    std::cout << "Right" << std::endl;

                    break;

                case sf::Keyboard::Scan::Space:
                    // run shoot
                    std::cout << "Shoot" << std::endl;

                    break;
                }
                break;
            }
        }

        window.clear(sf::Color::Black);

        // draw everything here...
        // window.draw(...);
        player.renderEntity(window, playerSprite);

        // end the current frame
        window.display();
    }
}
