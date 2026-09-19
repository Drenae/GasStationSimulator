#include "MagnetArmComponent.h"

UMagnetArmComponent::UMagnetArmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsMagnetInUse = false;
    this->bIsMagnetAttracting = false;
    this->bShouldAttractedActorRotate = false;
    this->AttractedActor = NULL;
    this->MagnetState = EMagnetState::OBJECT_NOT_ATTACHED;
    this->MainActorMesh = NULL;
    this->ActionRange = NULL;
    this->SnapLocation = NULL;
    this->HorizontalBlockBoxComponent = NULL;
    this->VerticalBlockBoxComponent = NULL;
    this->AnimInstance = NULL;
    this->bHasAnimInstance = false;
    this->LerpPercent = 0.00f;
    this->ReactivateMagnetCooldownActive = false;
    this->DetachCooldownActive = false;
    this->AttachToSocket = false;
    this->DrawDebugLines = false;
    this->OnlyZRotation = false;
    this->StopAttractingOnExit = false;
    this->AttractEventIfNotInUse = false;
    this->DettachVelocityMultiplier = 1.00f;
    this->IgnoreCollisionTypeAfterSnap = ECC_Vehicle;
    this->MaxForce = 2500000;
    this->MaxDistance = 800;
    this->MinRequiredDistanceToSnap = 20;
    this->AdjustActorRotationLerpStep = 300.00f;
    this->AdjustActorLerpStep = 300.00f;
    this->MinimalDistanceToDropOffPlane = 350.00f;
    this->ForceToApplayWhenReleasingMagnet = 1000000;
    this->TimerFloatForChangingCollisionResponseChannel = 0.20f;
    this->LimitMaxReleaseVelocity = false;
    this->MaxReleaseVelocity = 100.00f;
    this->DetachCooldown = 1.00f;
    this->RequireDroppableAreas = false;
    this->DetachErrorMessageDuration = 3.00f;
}


void UMagnetArmComponent::SetIsMagnetInUse(bool bNewIsMagnetInUse) {
}

void UMagnetArmComponent::OnActorSnapped(AActor* Actor) {
}

void UMagnetArmComponent::MoveArmVertical(float Value) {
}

void UMagnetArmComponent::MoveArmHorizontal(float Value) {
}

void UMagnetArmComponent::LowerMagnet(float Value) {
}

bool UMagnetArmComponent::IsActorCompatible(AActor* CheckedActor) {
    return false;
}

void UMagnetArmComponent::InputAxisMoveArmVertical_Implementation(float Value) {
}

void UMagnetArmComponent::InputAxisMoveArmHorizontal_Implementation(float Value) {
}

void UMagnetArmComponent::InputAxisLowerMagnet_Implementation(float Value) {
}

void UMagnetArmComponent::InputAxisExtendArm_Implementation(float Value) {
}

void UMagnetArmComponent::InputActionActivateMagnet_Implementation(bool bPressed) {
}

void UMagnetArmComponent::InitMagnetArm(USkeletalMeshComponent* MainMesh, UStaticMeshComponent* ActionRangeMesh, UArrowComponent* SnapLocationArrow, UBoxComponent* HorizontalBlockBox, UBoxComponent* VerticalBlockBox) {
}

void UMagnetArmComponent::ForceSnapToMagnet(AActor* Actor) {
}

void UMagnetArmComponent::ExtendArm(float Value) {
}







void UMagnetArmComponent::EndDetachCooldown() {
}

AActor* UMagnetArmComponent::DetachAttractedActor() {
    return NULL;
}

void UMagnetArmComponent::ChangeCollisionResponseChannelForThrownObject() {
}

bool UMagnetArmComponent::CanDetachActor(EMagnetDetachErrorReason& ErrorReason) {
    return false;
}

void UMagnetArmComponent::ApplyInfluence() {
}

void UMagnetArmComponent::AdjustPulledActorRotation(float DeltaSeconds) {
}

void UMagnetArmComponent::ActivateMagnet_Released() {
}

void UMagnetArmComponent::ActivateMagnet_Pressed() {
}


