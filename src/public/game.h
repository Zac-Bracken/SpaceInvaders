#ifndef GAME_H
#define GAME_H
#include <SFML/Window.hpp>
#include <public/player.h>
#include <public/invader.h>
#include <vector>

class Game
{

private:
    bool gameState;
    int playerScore;
    int gameLevel;

public:
    Game();
    void setLevel();
    void setScore();
    void setGameState();
    void startGame();
    void removeEntity();
    void addEntity();
    void loadingScreen();
    void gameRun();
};

#endif