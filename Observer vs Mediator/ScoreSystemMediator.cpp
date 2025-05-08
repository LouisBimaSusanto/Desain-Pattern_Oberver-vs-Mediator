#include "ScoreSystemMediator.h"

void ScoreSystemMediator::OnEvent(const std::string &eventType, void *data)
{
    if (eventType == "attack")
    {
        Enemy *enemy = static_cast<Enemy *>(data);
        if (enemy->IsDead())
        {
            score += 100;
            std::cout << "[Score] Enemy dead! Score: " << score << std::endl;
        }
    }
}
