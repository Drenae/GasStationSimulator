#include "RVEventManager.h"

URVEventManager::URVEventManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EventCooldownInHours = 0;
    this->RVCampManager = NULL;
    this->EventSettings = NULL;
}

void URVEventManager::UpdateEventCooldown() {
}

void URVEventManager::TryStartNewEvent() {
}

void URVEventManager::OnHourUpdated(int32 Hour) {
}


