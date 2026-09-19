#include "RvMinigameInWorld_Dishwashing.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

ARvMinigameInWorld_Dishwashing::ARvMinigameInWorld_Dishwashing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GamepadMovementArea = CreateDefaultSubobject<UBoxComponent>(TEXT("Gamepad Movement Camera"));
    this->CurrentEfficiency = EDishwashingEfficiency::NORMAL;
    this->MaxWaterFlowDuration = 0.00f;
    this->CurrentWaterFlowDuration = 0.00f;
    this->DishwashingSettings = NULL;
    this->DishwashingWaterStream = NULL;
    this->GamepadMovementArea->SetupAttachment(RootComponent);
}

void ARvMinigameInWorld_Dishwashing::UseWater(float Amount) {
}

void ARvMinigameInWorld_Dishwashing::OnDishPlacedOnDishesStack(ADishesStack* DishesStack, ADishItem* Dish) {
}

ADishItem* ARvMinigameInWorld_Dishwashing::GetTopDishFromPriorityDirtyDishesStack() {
    return NULL;
}

void ARvMinigameInWorld_Dishwashing::BroadcastOnDishWetStateChanged(ADishItem* Dish, bool bWet) {
}

void ARvMinigameInWorld_Dishwashing::BroadcastOnDishStainsCountChange(ADishItem* Dish, int32 Change) {
}

void ARvMinigameInWorld_Dishwashing::BroadcastOnClearStainAttempt(ADishItem* Dish, int32 Amount) {
}


