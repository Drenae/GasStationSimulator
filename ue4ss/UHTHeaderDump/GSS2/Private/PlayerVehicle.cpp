#include "PlayerVehicle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent

APlayerVehicle::APlayerVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NewSpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("NewSpringArm"));
    this->NewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("NewCameraComponent"));
    this->OriginalCharacter = NULL;
    this->ForwardAxisValue = 0.00f;
    this->InputAxisMoveRight = 0.00f;
    this->FuelRemoveSpeed = 0.12f;
    this->StandardSpeed = 350.00f;
    this->BoostSpeed = 800.00f;
    this->bFillMinigameActive = false;
    this->bIsBoostActive = false;
    this->bEngineCrashed = false;
    this->bHandbrakePressed = false;
    this->bHoldingCooling = false;
    this->TimeSinceLastMove = 0.00f;
    this->CameraMoveTime = 0.00f;
    this->OverheatSpeedWhenSprint = 0.04f;
    this->OverheatSpeedMultiplier = 2.00f;
    this->OverheatLimit = 20.00f;
    this->OverheatReductionMultiplier = 2.00f;
    this->OverheatReductionHolding = 4.00f;
    this->bInvertX = false;
    this->bInvertY = false;
    this->bToogleSprintMode = false;
    this->CameraSpeedX = 1.00f;
    this->CameraSpeedY = 1.00f;
    this->BaseTurnRate = 100.00f;
    this->BaseLookUpRate = -100.00f;
    this->CurrentOverheat = 0.00f;
    this->BindWidget = NULL;
    this->NewCameraComponent->SetupAttachment(NewSpringArmComponent);
    this->NewSpringArmComponent->SetupAttachment(RootComponent);
}

void APlayerVehicle::UnPossesPlayerVehicle_Implementation() {
}


void APlayerVehicle::StopBoostOnEngineCrash_Implementation() {
}

void APlayerVehicle::SetInputActions(bool bPossesed) {
}

void APlayerVehicle::SetCurrentOverheat(float NewValue) {
}

void APlayerVehicle::ResetVehicle() {
}

void APlayerVehicle::PossesPlayerVehicle_Implementation() {
}

void APlayerVehicle::PlayerVehicleZoomAxis(float Value) {
}

void APlayerVehicle::PlayerVehicleTurboAction_Released() {
}

void APlayerVehicle::PlayerVehicleTurboAction_Pressed() {
}

void APlayerVehicle::PlayerVehicleSecondaryAction_Released() {
}

void APlayerVehicle::PlayerVehicleSecondaryAction_Pressed() {
}

void APlayerVehicle::PlayerVehiclePrimaryAction_Released() {
}

void APlayerVehicle::PlayerVehiclePrimaryAction_Pressed() {
}

void APlayerVehicle::PlayerVehicleMoveSideways(float Value) {
}

void APlayerVehicle::PlayerVehicleMoveForward(float Value) {
}

void APlayerVehicle::PlayerVehicleLookUpAxis(float Value) {
}

void APlayerVehicle::PlayerVehicleLookSidesAxis(float Value) {
}

void APlayerVehicle::PlayerVehicleInteraction_Released() {
}

void APlayerVehicle::PlayerVehicleInteraction_Pressed() {
}

void APlayerVehicle::PlayerVehicleHandbreakeAction_Released() {
}

void APlayerVehicle::PlayerVehicleHandbreakeAction_Pressed() {
}

void APlayerVehicle::OverheatHandling_Implementation() {
}

void APlayerVehicle::OnAppliedControlSettings() {
}

void APlayerVehicle::InputActionZoomAxis(float Value) {
}

void APlayerVehicle::InputActionTurbo(bool bPressed) {
}

void APlayerVehicle::InputActionSecondary_Implementation(bool bPressed) {
}

void APlayerVehicle::InputActionPrimary_Implementation(bool bPressed) {
}

void APlayerVehicle::InputActionMoveSides_Implementation(float Value) {
}

void APlayerVehicle::InputActionMoveForward_Implementation(float Value) {
}

void APlayerVehicle::InputActionLookUp(float Value) {
}

void APlayerVehicle::InputActionLookSides(float Value) {
}

void APlayerVehicle::InputActionInteraction_Implementation(bool bPressed) {
}

void APlayerVehicle::InputActionHandbrake(bool bPressed) {
}

float APlayerVehicle::GetCurrentOverheat() const {
    return 0.0f;
}



void APlayerVehicle::CreateKeyItemWidget() {
}

void APlayerVehicle::CheckIfUnderMap() {
}



