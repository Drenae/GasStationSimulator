#include "AchievementManager.h"

AAchievementManager::AAchievementManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AchievementScreenTime = 5.00f;
    this->ActiveAchivementWidget = NULL;
}


void AAchievementManager::SaveAchievementDataToFile() {
}

void AAchievementManager::RetroactiveAchievementCheck() {
}

void AAchievementManager::NativeHandleAchievement(FName AchievementToTrigger) {
}

void AAchievementManager::LoadAchievementDataFromFile() {
}

bool AAchievementManager::IsAchievementCompleted(FName AchievementName) {
    return false;
}

void AAchievementManager::HandleStatAchievement(EGSS_Stat Stat, float Value) {
}


FAchievementRow AAchievementManager::GetAchievementData(FName AchievementName) {
    return FAchievementRow{};
}

TArray<FAchievementRow> AAchievementManager::FilterAchievementsByStat(EGSS_Stat Stat) {
    return TArray<FAchievementRow>();
}

void AAchievementManager::AchievementWidgetDone() {
}


