#include "JunkyardMultitool.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AJunkyardMultitool::AJunkyardMultitool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->MainMesh = (USkeletalMeshComponent*)RootComponent;
    this->PlayerHandlePoint = CreateDefaultSubobject<UArrowComponent>(TEXT("PlayerHandlePoint"));
    this->MaxRangeFromStationBeforeReset = 1000.00f;
    this->TraceDistance = 1000.00f;
    this->LastTargetedWreck = NULL;
}

void AJunkyardMultitool::ReattachToPlayer() {
}


void AJunkyardMultitool::OnPutDown() {
}

void AJunkyardMultitool::OnPickUp(APawn* PickedUpPawn) {
}

bool AJunkyardMultitool::GetIsPickedUp() {
    return false;
}

void AJunkyardMultitool::CheckDistanceFromStation() {
}


