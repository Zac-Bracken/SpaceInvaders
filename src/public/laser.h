#ifndef LASER_H
#define LASER_H
#include "public/entity.h"

class Laser : public Entity
{

private:
    bool isFired = false;

public:
    Laser();
    Laser(int startingHealth, int startingSpeed, int entityID);
    void fire();
};

#endif