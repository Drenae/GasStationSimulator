#include "LeaderboardManager.h"

ALeaderboardManager::ALeaderboardManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IndxLiderboard = 0;
}

EMinigame ALeaderboardManager::GetMinigameFromLeaderboardName(const FString& LeaderboardName) {
    return EMinigame::None;
}

FString ALeaderboardManager::GetLeaderboardKey(EMinigame minigame) {
    return TEXT("");
}


