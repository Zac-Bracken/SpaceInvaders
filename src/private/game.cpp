#include "public/game.h"
#include "SFML/Graphics.hpp"
#include <iostream>

Game::Game()
{
    ;
}

void Game::gameRun()
{

    // game loop

    sf::RenderWindow window(sf::VideoMode(700, 700), "My window");
    window.setFramerateLimit(60);
    // spawn player
    Player player(2, 2, 3, 4);
    sf::Sprite playerSprite;
    sf::Texture invaderTexture;
    sf::Event event;
    sf::Texture texture;
    std::vector<Invader> listOfInvaders;
    // float invaderX;
    // float invaderY;

    // put this into a common header file
    enum MoveEvents
    {
        left,
        right,
        down,
        up
    };

    if (!invaderTexture.loadFromFile("../../assets/xwing.png"))
    {
        std::cout << "Could not load sprite texture" << std::endl;
    }
    for (int i = 0; i < 56; i++)
    {
        Invader invader(1, 1, 2, i);
        listOfInvaders.push_back(invader);
    }
    // listOfInvaders[0].setSprite(invaderTexture, 200, 195);

    for (int i = 0; i < listOfInvaders.size(); i++)
    {

        // functionality to determine invader x and y

        listOfInvaders[i].setSprite(invaderTexture, (float)i, (float)i);
    }

    // set player position
    player.setLocation(700 / 2, 700 - player.getSprite().getGlobalBounds().height);
    std::cout << player.getSprite().getPosition().x << std::endl;

    sf::Clock deltaClock;

    while (window.isOpen())
    {
        std::cout << "reset" << std::endl;
        float deltaTime = deltaClock.restart().asSeconds();
        // check all the window's events that were triggered since the last iteration of the loop

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            // left key is pressed: move our character
            player.moveLeft(window, deltaTime);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            player.moveRight(window, deltaTime);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
        {
            ;
            // run shoot
        }
        while (window.pollEvent(event))
        {
            // TO DO ---- if game wants to render entities i.e startup, next level, run draw entities which will clear screen and take in all the entities required for that game level

            switch (event.type)
            {
            case sf::Event::Closed:
                window.close();
                break;
            }
        }

        window.clear(sf::Color::Black);

        // draw everything here...
        // window.draw(...);
        sf::Vector2f test;
        //  test = playerSprite.getPosition();
        //  std::cout << test.x << std::endl;
        std::cout << player.getSprite().getPosition().x << std::endl;

        window.draw(player.getSprite());
        // window.draw(listOfInvaders[0].getSprite());
        // for (int i = 0; i < listOfInvaders.size(); i++)
        // {
        //     std::cout << "test" << std::endl;
        //     window.draw(listOfInvaders[0].getSprite());
        // }
        // end the current frame
        window.display();
    }
}
