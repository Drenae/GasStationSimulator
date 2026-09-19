#include "SaunaCollectibleDot.h"

ASaunaCollectibleDot::ASaunaCollectibleDot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LifeTimeLeft = -1.00f;
    this->WarmUpTimeLeft = -1.00f;
}

void ASaunaCollectibleDot::OnWarmUpTimeLeftChanged_Implementation(float TimeLeft) {
}

void ASaunaCollectibleDot::OnLifeDurationPassed_Implementation() {
}

void ASaunaCollectibleDot::OnDotCollected_Implementation() {
}

bool ASaunaCollectibleDot::IsWarmingUp() const {
    return false;
}


