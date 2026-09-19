#include "PlayerAnimInstance.h"

UPlayerAnimInstance::UPlayerAnimInstance() {
    this->bStinkbomb = false;
    this->SpawnedActor = NULL;
}

void UPlayerAnimInstance::SetStoredUpVector(FVector NewVector) {
}

void UPlayerAnimInstance::SetStoredRightVector(FVector NewVector) {
}

void UPlayerAnimInstance::SetStoredForwardVector(FVector NewVector) {
}

void UPlayerAnimInstance::SetStinkbomb(bool bNewState) {
}

void UPlayerAnimInstance::SetStartingRotation(FRotator NewRotation) {
}

void UPlayerAnimInstance::SetStartingLocation(FVector NewLocation) {
}

void UPlayerAnimInstance::SetSpawnedActor(AActor* NewActor) {
}

void UPlayerAnimInstance::SetDesiredRotation(FRotator NewRotation) {
}

void UPlayerAnimInstance::SetDesiredLocation(FVector NewLocation) {
}

FVector UPlayerAnimInstance::GetStoredUpVector() {
    return FVector{};
}

FVector UPlayerAnimInstance::GetStoredRightVector() {
    return FVector{};
}

FVector UPlayerAnimInstance::GetStoredForwardVector() {
    return FVector{};
}

bool UPlayerAnimInstance::GetStinkbomb() {
    return false;
}

FRotator UPlayerAnimInstance::GetStartingRotation() {
    return FRotator{};
}

FVector UPlayerAnimInstance::GetStartingLocation() {
    return FVector{};
}

AActor* UPlayerAnimInstance::GetSpawnedActor() {
    return NULL;
}

FRotator UPlayerAnimInstance::GetDesiredRotation() {
    return FRotator{};
}

FVector UPlayerAnimInstance::GetDesiredLocation() {
    return FVector{};
}


