#include "MinigameBaseCamera.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent

AMinigameBaseCamera::AMinigameBaseCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinigameState = ECharacterState::MAX;
    this->GarageMingameType = EGarageMinigame::MAX;
    this->PartToFix = NULL;
    this->GarageRef = NULL;
    this->MinigameCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MinigameCamera"));
    this->SoundMaker = CreateDefaultSubobject<UAudioComponent>(TEXT("SoundMaker"));
    this->SoundMakerTwo = CreateDefaultSubobject<UAudioComponent>(TEXT("SoundMakerTwo"));
    this->MinigameStartSound = NULL;
    this->MinigameEnd_Success_Sound = NULL;
    this->MinigameEnd_Fail_Sound = NULL;
    this->TrashItemClass = NULL;
}

FHitResult AMinigameBaseCamera::TraceUnderMouseCursorFromMinigameCamera(TArray<AActor*> ActorsToIgnore) {
    return FHitResult{};
}

void AMinigameBaseCamera::SecondaryAction(bool bPressed) {
}

void AMinigameBaseCamera::RightAction(float Val) {
}

void AMinigameBaseCamera::PrimaryAction(bool bPressed) {
}

bool AMinigameBaseCamera::HasCameraOverrideForCar(TSoftClassPtr<AGSSWheeledVehicle> CarClassSoftClassPtr) {
    return false;
}

void AMinigameBaseCamera::GetCameraOverrides(TSoftClassPtr<AGSSWheeledVehicle> CarClassSoftClassPtr, FVector& LocationOverride, FRotator& RotationOverride) {
}

void AMinigameBaseCamera::FinishMinigame(bool bSuccess) {
}

void AMinigameBaseCamera::BButtonAction(bool bIsPressed) {
}

void AMinigameBaseCamera::AButtonAction(bool bIsPressed) {
}


