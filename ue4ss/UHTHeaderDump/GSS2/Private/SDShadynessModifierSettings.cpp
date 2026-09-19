#include "SDShadynessModifierSettings.h"

FSDShadynessModifierSettings::FSDShadynessModifierSettings() {
    this->ModifierPersistance = ESDShadynessModifierPersistance::Instant;
    this->Duration = 0.00f;
    this->ShadynessDelta = 0.00f;
}

