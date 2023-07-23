#ifndef LASER_H
#define LASER_H
#include "public/entity.h"

class Laser : public Entity
{

private:
    bool isFired = false;

public:
    Laser();
    void fire();
};