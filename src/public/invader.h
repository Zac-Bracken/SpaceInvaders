#ifndef INVADER_H
#define INVADER_H
#include "public/entity.h"

class Invader : public Entity
{

private:
    int worthPoints;

public:
    Invader();
    void move();
    void dropDown();
}