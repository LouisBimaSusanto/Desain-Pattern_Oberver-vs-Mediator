#include "UIHealthDisplayMediator.h"

void UIHealthDisplayMediator::OnEvent(const std::string &eventType, void *data)
{
    if (eventType == "attack")
    {
        Enemy *enemy = static_cast<Enemy *>(data);
        std::cout << "[UI] Enemy health updated: " << enemy->health << std::endl;
    }
}
