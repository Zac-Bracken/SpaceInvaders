#include "public/Invader.h"

Invader::Invader(int worthPointsValue, int startingHealth, int startingSpeed, int entityId)
    : Entity(startingHealth, startingSpeed, entityId)
{
    // Set values based on provided parameters
    worthPoints = worthPointsValue;
}

void Invader::move()
{
    // Implement invader movement logic here
}

void Invader::dropDown()
{
    // Implement invader dropping logic here
}
