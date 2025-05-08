// GameEventMediator.h
#pragma once

#include <string>
#include <vector>
#include "IObserver.h"

class GameEventMediator
{
private:
    std::vector<IObserver *> observers;

public:
    void RegisterObserver(IObserver *observer);
    void TriggerEvent(const std::string &eventType, void *data);
};
