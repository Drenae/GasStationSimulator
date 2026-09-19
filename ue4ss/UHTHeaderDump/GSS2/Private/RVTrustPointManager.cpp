#include "RVTrustPointManager.h"

URVTrustPointManager::URVTrustPointManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TotalTrustPoints = 0;
    this->CurrentTrustPoints = 0;
    this->RVCampManager = NULL;
    this->TrustPointsSettings = NULL;
}

int32 URVTrustPointManager::GetTrustPointsToAddPerWinStreak(const FGameplayTag& MinigameTag) {
    return 0;
}

int32 URVTrustPointManager::GetTotalTrustPointsToAdd(const FGameplayTag& MinigameTag, EGuestServiceDifficulty Difficulty) {
    return 0;
}

int32 URVTrustPointManager::GetTotalTrustPoints() const {
    return 0;
}

int32 URVTrustPointManager::GetCurrentTrustPoints() const {
    return 0;
}

int32 URVTrustPointManager::GetBaseTrustPointsToAdd(const FGameplayTag& MinigameTag, EGuestServiceDifficulty Difficulty) {
    return 0;
}

void URVTrustPointManager::AddTrustPointsOnTurnoutEnd(URVCustomerData* CustomerData) {
}

int32 URVTrustPointManager::AddRVTrustPoints(int32 PointsToAdd, EEconomyDetailedYieldType DetailedYieldType) {
    return 0;
}


