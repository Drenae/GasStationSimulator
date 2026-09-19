#include "CustomizationRequirementsSettings.h"

FCustomizationRequirementsSettings::FCustomizationRequirementsSettings() {
    this->bRequiresCarWreckClass = false;
    this->bRequiresCarWreckTier = false;
    this->bRequiresGears = false;
    this->GearScoreFractionValue = 0.00f;
    this->bRequiresCarPartClass = false;
    this->bRequiresCarPartTier = false;
    this->bRequiresDecals = false;
    this->DecalNumberExact = 0;
    this->bRequiresPaintType = false;
    this->bRequiresColor = false;
    this->bRequiresPaintFinish = false;
}

