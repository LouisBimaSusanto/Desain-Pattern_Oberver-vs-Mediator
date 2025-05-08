// GameEventMediator.cpp
#include "GameEventMediator.h"

void GameEventMediator::RegisterObserver(IObserver *observer)
{
    observers.push_back(observer);
}

void GameEventMediator::TriggerEvent(const std::string &eventType, void *data)
{
    for (auto observer : observers)
    {
        observer->OnEvent(eventType, data); // Notify observers of the event
    }
}
