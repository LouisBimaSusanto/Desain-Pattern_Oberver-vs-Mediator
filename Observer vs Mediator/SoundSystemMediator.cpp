#include "SoundSystemMediator.h"

void SoundSystemMediator::OnEvent(const std::string &eventType, void *data)
{
    if (eventType == "attack")
    {
        std::cout << "[Sound] Attack sound played." << std::endl;
    }
}
