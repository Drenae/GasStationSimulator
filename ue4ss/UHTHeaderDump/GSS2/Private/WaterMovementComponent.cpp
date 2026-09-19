#include "WaterMovementComponent.h"

UWaterMovementComponent::UWaterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TurnSpeed = 0.20f;
    this->DefaultSpeedMultiplier = 1.00f;
    this->DelayedTurnSpeedMultiplier = 1.00f;
    this->XRotationLimit = 20.00f;
    this->YRotationLimit = 20.00f;
    this->ZLocationMin = 1300.00f;
    this->ZLocationMax = 1600.00f;
    this->ZLocationSoftMin = 1200.00f;
    this->ZLocationSoftMax = 1700.00f;
    this->ZSoftCorrectionForce = 20000.00f;
    this->ShouldSlowBeforeDestination = false;
    this->SlowDestinationDistance = 2000.00f;
    this->ShouldSpeedUpFarFromDestination = false;
    this->FarSpeedBoostMultiplier = 1.00f;
    this->FarFromDestinationDistance = 20000.00f;
    this->MinDestinationSpeed = 0.30f;
    this->AcceptableDistance = 200.00f;
    this->TargetActor = NULL;
    this->CustomDestination = NULL;
    this->bUseTargetActor = false;
    this->bMove = false;
    this->LoopedMovementTime = 120.00f;
    this->Home = NULL;
    this->bGoingHome = false;
    this->bUseSpawnMontage = false;
    this->bTurn = true;
    this->bUseDespawnSpawnMontage = false;
    this->bSingleMoveTo = false;
    this->bReverseMovement = false;
    this->CurrentPathIndex = 0;
    this->PathArrayLenght = 0;
    this->CurrentHomePathIndex = 0;
    this->HomePointArrayLenght = 0;
    this->bPlayingStopMontage = false;
    this->bDespawning = false;
    this->CurrentMovementPoint = NULL;
    this->bIsPositionLocked = false;
    this->bCanBeAttacked = true;
    this->ObstacleSide = EObstacleSide::NoObstacle;
}



void UWaterMovementComponent::SetUseTargetActor(bool NewValue) {
}

void UWaterMovementComponent::SetUseSpawnMontage(bool NewValue) {
}

void UWaterMovementComponent::SetUseDeSpawnMontage(bool NewValue) {
}

void UWaterMovementComponent::SetTurn(bool NewValue) {
}

void UWaterMovementComponent::SetSingleMoveTo(bool NewValue) {
}

void UWaterMovementComponent::SetReverseMovement(bool NewValue) {
}

void UWaterMovementComponent::SetPathArrayLenght(int32 NewValue) {
}

void UWaterMovementComponent::SetLoopedMovementTime(float NewTime) {
}

void UWaterMovementComponent::SetLockLocationAndRotation(bool IsPositionLocked) {
}

void UWaterMovementComponent::SetHomePointArrayLenght(int32 NewValue) {
}

void UWaterMovementComponent::SetHome(AActor* HomeReference) {
}

void UWaterMovementComponent::SetGoingHome(bool NewValue) {
}

void UWaterMovementComponent::SetCurrentPathIndex(int32 NewValue) {
}

void UWaterMovementComponent::SetCurrentMovementPoint(AActor* NewPoint) {
}

void UWaterMovementComponent::SetCurrentHomePathIndex(int32 NewValue) {
}

void UWaterMovementComponent::SetCanBeAttacked(bool NewValue) {
}

void UWaterMovementComponent::ResetObstacleDetection() {
}


void UWaterMovementComponent::OverrideTurnRate(float NewTurnRate) {
}

void UWaterMovementComponent::MoveOnWaterStart() {
}

void UWaterMovementComponent::MoveOnWaterEnd() {
}



bool UWaterMovementComponent::GetUseTargetActor() {
    return false;
}

bool UWaterMovementComponent::GetUseSpawnMontage() {
    return false;
}

bool UWaterMovementComponent::GetUseDeSpawnMontage() {
    return false;
}

bool UWaterMovementComponent::GetTurn() {
    return false;
}

bool UWaterMovementComponent::GetSingleMoveTo() {
    return false;
}

bool UWaterMovementComponent::GetReverseMovement() {
    return false;
}

float UWaterMovementComponent::GetLoopedMovementTime() {
    return 0.0f;
}

AActor* UWaterMovementComponent::GetHome() {
    return NULL;
}

bool UWaterMovementComponent::GetGoingHome() {
    return false;
}

AActor* UWaterMovementComponent::GetCurrentMovementPoint() {
    return NULL;
}

bool UWaterMovementComponent::GetCanBeAttacked() {
    return false;
}


