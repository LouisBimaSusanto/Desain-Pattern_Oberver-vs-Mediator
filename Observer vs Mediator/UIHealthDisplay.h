// UIHealthDisplay.h
#pragma once
#include "IObserver.h"

class UIHealthDisplay : public IObserver
{
public:
    void OnEvent(const std::string &eventType, void *data) override; // Override OnEvent
};

// UIHealthDisplay.cpp
#include "UIHealthDisplay.h"
#include <iostream>

void UIHealthDisplay::OnEvent(const std::string &eventType, void *data)
{
    if (eventType == "attack")
    {
        // Handle the attack event, for example, update the UI
        std::cout << "Health UI updated after attack." << std::endl;
    }
}
