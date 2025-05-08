// ScoreSystemMediator.h
#pragma once

#include "IEventListener.h"
#include "Enemy.h"
#include <iostream>

class ScoreSystemMediator : public IEventListener
{
private:
    int score = 0;

public:
    void OnEvent(const std::string &eventType, void *data) override
    {
        if (eventType == "attack")
        {
            Enemy *enemy = static_cast<Enemy *>(data);
            if (enemy->IsDead())
            {
                score += 100;
                std::cout << "[Score] Enemy dead! Score: " << score << std::endl;
            }
        }
    }
};
