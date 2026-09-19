#include "DishwashingWaterStream.h"

ADishwashingWaterStream::ADishwashingWaterStream(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinigameInWorldDishwashing = NULL;
    this->WaterTickRate = 0.10f;
    this->TraceStartHeightOffset = 8.00f;
    this->TraceLength = 50.00f;
    this->TraceRadius = 3.70f;
    this->CurrentWaterTickRate = 0.00f;
    this->bWaterStreamEnabled = false;
}

void ADishwashingWaterStream::SetWaterStreamEnabled(bool bNewEnabled) {
}

bool ADishwashingWaterStream::IsWaterStreamEnabled() const {
    return false;
}


