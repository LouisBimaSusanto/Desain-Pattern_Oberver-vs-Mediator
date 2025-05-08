// main.cpp
#include "GameEventMediator.h"
#include "PlayerWithMediator.h"
#include "Enemy.h"
#include "UIHealthDisplayMediator.h"
#include "SoundSystemMediator.h"
#include "ScoreSystemMediator.h"

int main()
{
    GameEventMediator mediator;

    UIHealthDisplayMediator ui;
    SoundSystemMediator sound;
    ScoreSystemMediator score;

    mediator.Subscribe("attack", &ui);
    mediator.Subscribe("attack", &sound);
    mediator.Subscribe("attack", &score);

    PlayerWithMediator player(&mediator);
    Enemy enemy;

    // Simulate attack
    player.Attack(&enemy);
    player.Attack(&enemy);
    player.Attack(&enemy);
    player.Attack(&enemy);
    player.Attack(&enemy);
    player.Attack(&enemy);
    player.Attack(&enemy);
    player.Attack(&enemy);
    player.Attack(&enemy);
    player.Attack(&enemy); // sampai musuh mati

    return 0;
}
