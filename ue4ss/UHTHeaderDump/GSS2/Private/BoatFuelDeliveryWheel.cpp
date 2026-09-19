#include "BoatFuelDeliveryWheel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent

ABoatFuelDeliveryWheel::ABoatFuelDeliveryWheel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FuelHoseAttachmentPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("FuelHoseAttachmentPoint"));
    this->bFuelPistolAttachDelay = 3.00f;
    this->bIsFueling = false;
    this->bIsOpen = false;
    this->FuelBoat = NULL;
    this->WheelTurnSpeed = 4.00f;
    this->WheelTurnMaxDuration = 3.00f;
    this->WheelTurnCurrentDuration = 0.00f;
    this->bIsTuringWheel = false;
    this->FuelSpeedMultiplier = 10.00f;
    this->FuelPourSoundCue = NULL;
    this->FuelPourSound = NULL;
    this->FuelHoseAttachmentPoint->SetupAttachment(RootComponent);
}

void ABoatFuelDeliveryWheel::OnUfoUsed() {
}

void ABoatFuelDeliveryWheel::OnBoatArrivedAtWarehouseDelayed(AWaterVehicle* WaterVehicle) {
}

void ABoatFuelDeliveryWheel::OnBoatArrivedAtWarehouse(AWaterVehicle* WaterVehicle) {
}


