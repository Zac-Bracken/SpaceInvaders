#ifndef ENTITY_H
#define ENTITY_H

class Entity
{

private:
    int health;
    bool isAlive;
    int speed;
    int id;

public:
    Entity();
    void renderEntity();
    void die();
    void shoot();
};

#endif