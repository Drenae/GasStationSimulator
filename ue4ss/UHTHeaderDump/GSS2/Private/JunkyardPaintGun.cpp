#include "JunkyardPaintGun.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputComponent -FallbackName=InputComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AJunkyardPaintGun::AJunkyardPaintGun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InputComponent = CreateDefaultSubobject<UInputComponent>(TEXT("Input Component"));
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMesh"));
    this->MainMesh = (UStaticMeshComponent*)RootComponent;
    this->MaxRangeFromStationBeforeReset = 1000.00f;
    this->MaxRangeFromHolderBeforeReset = 500.00f;
    this->DecalSprayingState = EDecalSprayingState::PLACING;
    this->DMIDecalTool = NULL;
    this->PreviewDecal = NULL;
    this->SpawnedDecal = NULL;
    this->TargetedDecal = NULL;
    this->GotLastDecal = NULL;
    this->TraceDistance = 500.00f;
    this->DecalsHolderWidget = NULL;
    this->DecalAmountLimit = 200;
    this->DistanceCheckTime = 1.00f;
    this->TimeSinceLastDistanceCheck = 0.00f;
}

void AJunkyardPaintGun::UptadePreviewDecalType(TSoftClassPtr<ADecalToPaint> PickedDecal, const FString& NewDecalText, ECustomizationPaintType PaintType) {
}

EDecalSprayingState AJunkyardPaintGun::SetNewDecalSprayingState(EDecalSprayingState NewState) {
    return EDecalSprayingState::PLACING;
}

void AJunkyardPaintGun::RPM() {
}

void AJunkyardPaintGun::RotateItemUp(float AxisValue) {
}

void AJunkyardPaintGun::RotateItemRight(float AxisValue) {
}

void AJunkyardPaintGun::ResetCarPainting() {
}

void AJunkyardPaintGun::PreviewTargets() {
}


void AJunkyardPaintGun::OnPutDown() {
}


void AJunkyardPaintGun::OnPickUp(APawn* PickedUpPawn) {
}




void AJunkyardPaintGun::LPM() {
}

bool AJunkyardPaintGun::GetIsPickedUp() {
    return false;
}

bool AJunkyardPaintGun::CheckDistanceFromStation() {
    return false;
}




