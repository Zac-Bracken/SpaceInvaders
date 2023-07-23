#ifndef INVADER_H
#define INVADER_H
#include "public/entity.h"

class Invader : public Entity
{

private:
    int worthPoints;

public:
    Invader();
    Invader(int worthPointsValue, int startingHealth, int startingSpeed, int entityID);
    void move();
    void dropDown();
};

#endif