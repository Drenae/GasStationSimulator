#include "CarWashStation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ACarWashStation::ACarWashStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentVehicle = NULL;
    this->Pistol = CreateDefaultSubobject<UChildActorComponent>(TEXT("Pistol"));
    this->WashedCarPosition = CreateDefaultSubobject<USceneComponent>(TEXT("Washed Car Position"));
    this->AutomaticWashParts = CreateDefaultSubobject<UChildActorComponent>(TEXT("Automatic Parts"));
    this->CarWashIsAutomatic = false;
    this->AutomaticWashParts->SetupAttachment(RootComponent);
    this->Pistol->SetupAttachment(RootComponent);
    this->WashedCarPosition->SetupAttachment(RootComponent);
}


bool ACarWashStation::TurnIntoAutomaticCarWash(bool Automatic) {
    return false;
}

void ACarWashStation::StartNonAutomaticWashing() {
}

void ACarWashStation::StartAutomaticWashing() {
}

void ACarWashStation::PutOutCar(AGSSWheeledVehicle* GSSWheeledVehicle) {
}

void ACarWashStation::PutInCar(AGSSWheeledVehicle* GSSWheeledVehicle) {
}

bool ACarWashStation::GetCarWashIsAutomatic() {
    return false;
}

void ACarWashStation::FinishCarWashGame(ETaskResult TaskState) {
}


