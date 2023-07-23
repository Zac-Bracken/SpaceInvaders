#ifndef ENTITY_H
#define ENTITY_H

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
    void renderEntity();
    void die();
    void shoot();
};

#endif