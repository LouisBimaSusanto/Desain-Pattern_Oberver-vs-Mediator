// SoundSystem.h
#pragma once

#include <string>
#include "IObserver.h"

class SoundSystem : public IObserver
{
public:
    void OnNotify(const std::string &eventType, void *data) override;
};
