// SoundSystemMediator.h
#pragma once

#include "IEventListener.h"
#include <iostream>

class SoundSystemMediator : public IEventListener
{
public:
    void OnEvent(const std::string &eventType, void *data) override
    {
        if (eventType == "attack")
        {
            std::cout << "[Sound] Attack sound played." << std::endl;
        }
    }
};
