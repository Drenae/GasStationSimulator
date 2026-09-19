#include "SDToiletMinigame.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ASDToiletMinigame::ASDToiletMinigame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlungerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plunger Mesh"));
    this->ClogMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Clog Mesh"));
    this->PlungerPathSpline = CreateDefaultSubobject<USplineComponent>(TEXT("Plunger Path Spline"));
    this->MaxToiletClogLevel = 4;
    this->PlungerMovementSpeed = 10.00f;
    this->PlungerTriggerDepth = 10.00f;
    this->ToiletClogLevel = 0;
    this->bClogged = false;
    this->CurrentPlungerDistance = 0.00f;
    this->VirtualDirtDecalClass = NULL;
    this->bUnclogTriggerGate = false;
    this->ClogMesh->SetupAttachment(RootComponent);
    this->PlungerMesh->SetupAttachment(RootComponent);
    this->PlungerPathSpline->SetupAttachment(RootComponent);
}

void ASDToiletMinigame::SetToiletClogLevel(int32 InAmount) {
}

void ASDToiletMinigame::MouseMovedUp(float Value) {
}

bool ASDToiletMinigame::IsToiletClogged() const {
    return false;
}

float ASDToiletMinigame::GetToiletClogPercent() const {
    return 0.0f;
}

int32 ASDToiletMinigame::GetCurrentClogLevel() const {
    return 0;
}

void ASDToiletMinigame::DestroyVirtualDecal(ADirtyDecal* DecaltoDestroy) {
}

void ASDToiletMinigame::ChangeToiletClogLevel(int32 Delta) {
}


