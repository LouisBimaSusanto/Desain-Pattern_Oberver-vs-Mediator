// UIHealthDisplay.cpp
#include "UIHealthDisplay.h"
#include <iostream>

void UIHealthDisplay::OnNotify(const std::string &eventType, void *data)
{
    if (eventType == "attack")
    {
        std::cout << "UIHealthDisplay updated: Enemy took damage!" << std::endl;
        // Update UI health here
    }
}
