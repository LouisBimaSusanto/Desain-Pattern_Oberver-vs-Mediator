// Player.h
#pragma once

#include <vector>
#include "IObserver.h"
#include "Enemy.h"

class Player
{
private:
    std::vector<IObserver *> observers;

public:
    void AddObserver(IObserver *observer);
    void RemoveObserver(IObserver *observer);
    void Attack(Enemy *enemy);
};
