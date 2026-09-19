#include "SDShadynessModifierBase.h"

USDShadynessModifierBase::USDShadynessModifierBase() {
    this->DurationLeft = 0.00f;
}

bool USDShadynessModifierBase::IsDurationExceeded() const {
    return false;
}

void USDShadynessModifierBase::Initialize(const FSDShadynessModifierSettings& InModifierSettings) {
}

float USDShadynessModifierBase::GetShadynessDelta() const {
    return 0.0f;
}

ESDShadynessModifierPersistance USDShadynessModifierBase::GetModifierPersistance() const {
    return ESDShadynessModifierPersistance::Instant;
}

float USDShadynessModifierBase::GetDurationLeft() const {
    return 0.0f;
}

float USDShadynessModifierBase::GetDuration() const {
    return 0.0f;
}


