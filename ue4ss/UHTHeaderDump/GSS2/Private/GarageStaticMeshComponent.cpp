#include "GarageStaticMeshComponent.h"

UGarageStaticMeshComponent::UGarageStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Direction = EMeshMovementDirection::FORWARD;
    this->TimeToMove = 1.00f;
    this->bIsMoving = false;
    this->curTime = 0.00f;
    this->InteractionSound = NULL;
    this->MoveLoopForwardSound = NULL;
    this->MoveLoopBackwardSound = NULL;
    this->MoveFinishedForwardSound = NULL;
    this->MoveFinishedBackwardSound = NULL;
    this->MoveLoopManualSound = NULL;
}

void UGarageStaticMeshComponent::StartMoving(EMeshMovementDirection NewDirection) {
}

float UGarageStaticMeshComponent::GetTimeToMove() {
    return 0.0f;
}


