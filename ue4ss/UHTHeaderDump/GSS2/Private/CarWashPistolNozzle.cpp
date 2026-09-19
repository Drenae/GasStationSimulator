#include "CarWashPistolNozzle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ACarWashPistolNozzle::ACarWashPistolNozzle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NozzleMeshComponent"));
    this->NozzleMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->NozzleRotation = ENozzleRotation::HORIZONTAL;
    this->ActiveNozzleData = NULL;
}

UStaticMeshComponent* ACarWashPistolNozzle::GetNozzleMeshComponent() {
    return NULL;
}

UNozzleData* ACarWashPistolNozzle::GetActiveNozzleData() {
    return NULL;
}

void ACarWashPistolNozzle::ChangeRotation() {
}

void ACarWashPistolNozzle::ChangeNozzle(UNozzleData* NewNozzleData) {
}


