// UIHealthDisplayMediator.h
#pragma once

#include "IEventListener.h"
#include "Enemy.h"
#include <iostream>

class UIHealthDisplayMediator : public IEventListener
{
public:
    void OnEvent(const std::string &eventType, void *data) override
    {
        if (eventType == "attack")
        {
            Enemy *enemy = static_cast<Enemy *>(data);
            std::cout << "[UI] Enemy health updated: " << enemy->health << std::endl;
        }
    }
};
