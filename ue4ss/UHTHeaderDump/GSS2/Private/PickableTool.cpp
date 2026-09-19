#include "PickableTool.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

APickableTool::APickableTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->MainMesh = (USkeletalMeshComponent*)RootComponent;
    this->PlayerHandlePoint = CreateDefaultSubobject<UArrowComponent>(TEXT("PlayerHandlePoint"));
    this->MaxRangeFromStationBeforeReset = 1000.00f;
}

void APickableTool::ReattachToPlayer() {
}

void APickableTool::OnPutDown_Implementation() {
}

void APickableTool::OnPickUp_Implementation(APawn* PickedUpPawn) {
}

bool APickableTool::GetIsPickedUp() {
    return false;
}

void APickableTool::CheckDistanceFromStation() {
}


