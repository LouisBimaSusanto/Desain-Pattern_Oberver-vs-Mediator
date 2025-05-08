// PlayerWithMediator.h
#pragma once

#include <string>
#include "GameEventMediator.h"
#include "Enemy.h"

class PlayerWithMediator
{
private:
    GameEventMediator *mediator;

public:
    PlayerWithMediator(GameEventMediator *mediator); // Constructor declaration
    void Attack(Enemy *enemy);                       // Attack function declaration
};
