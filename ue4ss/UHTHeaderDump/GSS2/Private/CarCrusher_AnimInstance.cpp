#include "CarCrusher_AnimInstance.h"

UCarCrusher_AnimInstance::UCarCrusher_AnimInstance() {
    this->bIsOpenCloseAnimationPlaying = false;
    this->bCrushingCar = false;
    this->bLidOpen = false;
    this->SpawnedCrushedCar = NULL;
}


void UCarCrusher_AnimInstance::SetSpawnedCrushedCar(AActor* SpawnedActor) {
}

void UCarCrusher_AnimInstance::SetLidOpen(bool Open) {
}

void UCarCrusher_AnimInstance::SetCrushing(bool Crushing) {
}

bool UCarCrusher_AnimInstance::IsOpenCloseAnimationPlaying() {
    return false;
}

bool UCarCrusher_AnimInstance::IsOpen() {
    return false;
}

bool UCarCrusher_AnimInstance::IsCrushingCar() {
    return false;
}


