// ScoreSystem.h
#pragma once

#include <string>
#include "IObserver.h"

class ScoreSystem : public IObserver
{
public:
    void OnNotify(const std::string &eventType, void *data) override;
};
