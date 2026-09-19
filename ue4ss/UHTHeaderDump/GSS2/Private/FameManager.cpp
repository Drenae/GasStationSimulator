#include "FameManager.h"

UFameManager::UFameManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FameSettings = NULL;
    this->CurrentFameLevel = 0;
    this->FameExperience = 0;
    this->ReceivedLevelsFromLastOpeningFameWidget = 0;
    this->ReceivedExperienceFromLastOpeningFameWidget = 0;
}

void UFameManager::ResetReceivedLevelsFromLastOpeningFameWidget() {
}

void UFameManager::ResetReceivedExperienceFromLastOpeningFameWidget() {
}

int32 UFameManager::GetRequiredExperienceForNextLevel() {
    return 0;
}

void UFameManager::AddExperience(const int32 ExperienceToAdd) {
}


