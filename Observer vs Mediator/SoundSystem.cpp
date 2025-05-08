// SoundSystem.cpp
#include "SoundSystem.h"
#include <iostream>

void SoundSystem::OnNotify(const std::string &eventType, void *data)
{
    if (eventType == "attack")
    {
        std::cout << "SoundSystem plays attack sound!" << std::endl;
        // Play sound effect here
    }
}
