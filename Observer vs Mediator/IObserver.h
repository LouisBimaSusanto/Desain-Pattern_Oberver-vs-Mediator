// IObserver.h
#pragma once
#include <string>

class IObserver
{
public:
    virtual void OnEvent(const std::string &eventType, void *data) = 0; // Pure virtual function
    virtual ~IObserver() {}                                             // Virtual destructor for proper cleanup
};
