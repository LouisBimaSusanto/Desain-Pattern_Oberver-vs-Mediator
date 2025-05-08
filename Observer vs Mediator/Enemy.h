// Enemy.h
#pragma once

#include <iostream>

class Enemy
{
public:
    int health = 100;

    void TakeDamage(int damage)
    {
        health -= damage;
        std::cout << "Enemy health: " << health << std::endl;
    }

    bool IsDead() const
    {
        return health <= 0;
    }
};
