#include "HumanSharedAnimInstance.h"

UHumanSharedAnimInstance::UHumanSharedAnimInstance() {
    this->PositionRate = 1.00f;
    this->RotationRate = 1.00f;
    this->WarpingTarget = NULL;
    this->ActorToAttach = NULL;
    this->RootStaticMeshToMove = NULL;
    this->HandLStaticMeshToMove = NULL;
    this->HandRStaticMeshToMove = NULL;
    this->CurrentPositioningMontage = NULL;
    this->SpawnedActorLHand = NULL;
    this->SpawnedActorRHand = NULL;
    this->bBlockWarping = false;
    this->bPointing = false;
    this->bPointingLeft = false;
    this->PointingPitch = 0.00f;
    this->PointingYaw = 0.00f;
    this->CurrentRotationMontage = NULL;
    this->bDialogNeverLookAt = false;
    this->SpawnedZippo = NULL;
    this->SpawnedObject = NULL;
}



void UHumanSharedAnimInstance::SetWarpingTarget(AActor* NewTarget) {
}

void UHumanSharedAnimInstance::SetStartingRotation(FRotator NewRotation) {
}

void UHumanSharedAnimInstance::SetStartingLocation(FVector NewLocation) {
}

void UHumanSharedAnimInstance::SetRootActorToAttach(AActor* NewActor, UActorComponent* RootNewComponent, FTransform RootInitialTransform) {
}

void UHumanSharedAnimInstance::SetRHandComponentToAttach(UActorComponent* RHandNewComponent, FTransform RHandInitialTransform) {
}

void UHumanSharedAnimInstance::SetLHandComponentToAttach(UActorComponent* LHandNewComponent, FTransform LHandInitialTransform) {
}

void UHumanSharedAnimInstance::SetDesiredRotation(FRotator NewRotation) {
}

void UHumanSharedAnimInstance::SetDesiredLocation(FVector NewLocation) {
}

void UHumanSharedAnimInstance::SetCurrentPositioningMontage(UAnimMontage* CurrentMontage) {
}

void UHumanSharedAnimInstance::SetBlockWarping(bool IsWarpingBlocked) {
}




FRotator UHumanSharedAnimInstance::GetStartingRotation() {
    return FRotator{};
}

FVector UHumanSharedAnimInstance::GetStartingLocation() {
    return FVector{};
}

TArray<AActor*> UHumanSharedAnimInstance::GetSpawnedObjectArray() {
    return TArray<AActor*>();
}

FRotator UHumanSharedAnimInstance::GetDesiredRotation() {
    return FRotator{};
}

FVector UHumanSharedAnimInstance::GetDesiredLocation() {
    return FVector{};
}


