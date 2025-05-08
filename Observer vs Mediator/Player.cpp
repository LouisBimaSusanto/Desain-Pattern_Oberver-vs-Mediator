// Player.cpp
#include "Player.h"
#include <algorithm>
#include <iostream>

void Player::AddObserver(IObserver *observer)
{
    observers.push_back(observer);
}

void Player::RemoveObserver(IObserver *observer)
{
    observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
}

void Player::Attack(Enemy *enemy)
{
    std::cout << "Player attacks!" << std::endl;
    enemy->TakeDamage(10);

    for (auto observer : observers)
    {
        observer->OnNotify("attack", enemy);
    }
}
