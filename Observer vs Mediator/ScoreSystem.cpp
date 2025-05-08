// ScoreSystem.cpp
#include "ScoreSystem.h"
#include <iostream>

void ScoreSystem::OnNotify(const std::string &eventType, void *data)
{
    if (eventType == "attack")
    {
        std::cout << "ScoreSystem: Incrementing score!" << std::endl;
        // Increment score here
    }
}
