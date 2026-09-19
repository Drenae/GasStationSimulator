#include "WaterMovementPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent

AWaterMovementPoint::AWaterMovementPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->CurrentVehicle = NULL;
    this->bReserved = false;
    this->IsFuelStationStop = false;
    this->InteractableActor = NULL;
}

void AWaterMovementPoint::SetIsReserved(bool NewValue) {
}

void AWaterMovementPoint::SetCurrentVehicle(AActor* NewVehicle) {
}

void AWaterMovementPoint::Reserve(AActor* ReserverVehicle) {
}


bool AWaterMovementPoint::GetIsReserved() {
    return false;
}

AActor* AWaterMovementPoint::GetCurrentVehicle() {
    return NULL;
}

void AWaterMovementPoint::Free() {
}


