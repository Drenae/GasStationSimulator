#include "RentalServiceValues.h"

URentalServiceValues::URentalServiceValues() {
    this->MinRentalDuration = 0;
    this->MaxRentalDuration = 0;
    this->bMultipleEqDurabilityStages = false;
    this->EquipmentDurabilityDownValuePerSetTime = 0.00f;
    this->EquipmentDurabilityDownPerSetSecondsValue = 0;
    this->RentalServicePriceUpValuePerSetTime = 0.00f;
    this->RentalServicePriceUpPerSetSecondsValue = 0;
    this->MaxCustomersInQueue = 0;
}

int32 URentalServiceValues::RandomRentingDuration() {
    return 0;
}

TSoftObjectPtr<UStaticMesh> URentalServiceValues::RandomEquipmentMesh() {
    return NULL;
}

TSoftObjectPtr<UMaterialInstance> URentalServiceValues::RandomEquipmentMaterial() {
    return NULL;
}

int32 URentalServiceValues::GetMaxContainerCapacity(int32 CurrentBuildingLevel) {
    return 0;
}

TSoftObjectPtr<UTexture2D> URentalServiceValues::GetItemIcon(float Durability) {
    return NULL;
}

float URentalServiceValues::GetDeathChanceMultiplier(float CurrentEqDurability) {
    return 0.0f;
}

float URentalServiceValues::GetDeathChance(float CurrentEqDurability) {
    return 0.0f;
}


