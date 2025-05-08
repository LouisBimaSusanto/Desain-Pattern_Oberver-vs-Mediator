// IEventListener.h
#pragma once

#include <string>

class IEventListener
{
public:
    virtual void OnEvent(const std::string &eventType, void *data) = 0;
    virtual ~IEventListener() = default;
};
