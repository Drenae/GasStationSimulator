#include "JoeCrashManager.h"

AJoeCrashManager::AJoeCrashManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HoursPassed = 0;
    this->CurRandomHour = 0;
}


