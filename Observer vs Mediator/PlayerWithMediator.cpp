// PlayerWithMediator.cpp
#include "PlayerWithMediator.h"
#include "Enemy.h"
#include <iostream>

PlayerWithMediator::PlayerWithMediator(GameEventMediator *mediator)
    : mediator(mediator) {}

void PlayerWithMediator::Attack(Enemy *enemy)
{
    std::cout << "Player attacks!" << std::endl;
    enemy->TakeDamage(10);

    // Notify the mediator about the attack event
    mediator->TriggerEvent("attack", enemy);
}
