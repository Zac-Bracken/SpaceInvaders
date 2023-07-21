#include <SFML/Graphics.hpp>

int main() {
    const int windowWidth = 800;
    const int windowHeight = 600;
    const int playerSpeed = 1;

    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Space Invader");

    sf::RectangleShape player(sf::Vector2f(50, 30));
    player.setFillColor(sf::Color::Green);
    player.setPosition(windowWidth / 2 - player.getSize().x / 2, windowHeight - player.getSize().y);

    sf::RectangleShape enemy(sf::Vector2f(30, 30));
    enemy.setFillColor(sf::Color::Red);
    enemy.setPosition(windowWidth / 2 - enemy.getSize().x / 2, 50);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && player.getPosition().x > 0)
            player.move(-playerSpeed, 0);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && player.getPosition().x + player.getSize().x < windowWidth)
            player.move(playerSpeed, 0);

        window.clear();
        window.draw(player);
        window.draw(enemy);
        window.display();
    }

    return 0;
}