#include "Minigame_MarshalWands.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InstancedStaticMeshComponent -FallbackName=InstancedStaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

AMinigame_MarshalWands::AMinigame_MarshalWands(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CenterSpline = CreateDefaultSubobject<USplineComponent>(TEXT("CenterSpline"));
    this->PlaneSpawnLocation = CreateDefaultSubobject<UArrowComponent>(TEXT("PlaneSpawnLocation"));
    this->WandsSpawnLocation = CreateDefaultSubobject<UArrowComponent>(TEXT("WandsSpawnLocation"));
    this->MinigameCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MinigameCamera"));
    this->WandsSpeedMultiplierMouse = 60.00f;
    this->WandsSpeedMultiplierKeyboard = 250.00f;
    this->PlaneTakeOffDuration = 7.00f;
    this->MaxAllowedPlaneDistanceFromCenterSpline = 200.00f;
    this->MaxPlaneForwardSpeed = 900.00f;
    this->MaxPlaneForwardSpeedDuringTakeOff = 2000.00f;
    this->StartingPlaneForwardSpeed = 0.00f;
    this->PlaneForwardSpeedGainedPerTick = 45.00f;
    this->PlaneForwardSpeedGainedPerTickDuringTakeOff = 400.00f;
    this->MinPlaneRotationSpeed = 0.00f;
    this->TargetAscendPitch = 45.00f;
    this->AscendPitchPerTick = 0.20f;
    this->MinigameWidgetClass = NULL;
    this->FadeInOutWidgetClass = NULL;
    this->bIsInDebugMode = false;
    this->GameRestartingDuration = 1.00f;
    this->CurrentPlaneRotationMinigameData = 0.00f;
    this->ActualPlaneRotationInWorld = 0.00f;
    this->MinigameCurrentRuntime = 0.00f;
    this->bIsTakingOff = false;
    this->bIsRestarting = false;
    this->CurrentPlaneForwardSpeed = 0.00f;
    this->CurrentAscendPitch = 0.00f;
    this->PlaneDistanceFromCenterSpline = 0.00f;
    this->TimeSinceLastDirectionChange = 0.00f;
    this->PlaneDirection = 0;
    this->PlaneInstance = NULL;
    this->CurrentWandsRotation = 0.00f;
    this->WandsInstance = NULL;
    this->MinigameWidgetInstance = NULL;
    this->FadeInOutWidgetInstance = NULL;
    this->bIsPlaneInGoodPosition = false;
    this->bIsPlaneInGoodRotation = false;
    this->bCanConfirmLiftOff = false;
    this->bIsTutorialShown = false;
    this->DifficultySettingsWidgetClass = NULL;
    this->DifficultySettingsWidgetInstance = NULL;
    this->CurrentDifficulty = EMarshalWandsMinigameDifficulty::EASY;
    this->MaxAllowedPlaneRotation = 30.00f;
    this->MinMinigameDuration = 23.00f;
    this->MaxMinigameDuration = 30.00f;
    this->TryChangeDirectionInterval = 1.00f;
    this->MaxPlaneRotationSpeed = 70.00f;
    this->PlaneWiggleSpeed = 30.00f;
    this->HappyStatForSuccessfullyFinishing = 50;
    this->LightsOffset = 50.00f;
    this->LightsInstancedMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("RunwayLightsInstancedMeshComp"));
    this->RunwayLightsMesh = NULL;
    this->RunwaylightMaterialParamsInstance = NULL;
    this->RunwaylightMaterialParams = NULL;
    this->RunwaylightMaterialColorParameterName = TEXT("Good_Bad");
    this->RandomJoeDialogInterval = 15.00f;
    this->FirstJoeDialogDelay = 2.00f;
    this->TakeOffJoeDialogDelay = 3.00f;
    this->CenterSpline->SetupAttachment(RootComponent);
    this->LightsInstancedMeshComponent->SetupAttachment(CenterSpline);
    this->MinigameCamera->SetupAttachment(RootComponent);
    this->PlaneSpawnLocation->SetupAttachment(RootComponent);
    this->WandsSpawnLocation->SetupAttachment(MinigameCamera);
}

void AMinigame_MarshalWands::WigglePlane() {
}

void AMinigame_MarshalWands::VisualsTick() {
}

void AMinigame_MarshalWands::UnbindPlayerInput() {
}



void AMinigame_MarshalWands::TriggeringEvents() {
}

void AMinigame_MarshalWands::StartPlaneTakeOffSequance_TimerElapsed() {
}

void AMinigame_MarshalWands::StartPlaneTakeOffSequance() {
}

void AMinigame_MarshalWands::StartMiniGame(EMarshalWandsMinigameDifficulty Difficulty) {
}

void AMinigame_MarshalWands::SpawnLightsAlongRunway() {
}

void AMinigame_MarshalWands::ShowDifficultyWidget() {
}

void AMinigame_MarshalWands::SetupPlayerInput() {
}

void AMinigame_MarshalWands::SetIsTutorialShown(bool _bIsTutorialShow, bool bIsShownOnStart) {
}

void AMinigame_MarshalWands::SetDifficultyValues(EMarshalWandsMinigameDifficulty Difficulty) {
}

void AMinigame_MarshalWands::SetDefaultValues() {
}

void AMinigame_MarshalWands::RotatePlaneInDirectionOfWands() {
}

void AMinigame_MarshalWands::RestartMinigame_TimerElapsed() {
}

void AMinigame_MarshalWands::RestartMinigame() {
}

void AMinigame_MarshalWands::PlayRandomJoeDialog(ENPCConversationType Dialogtype) {
}

void AMinigame_MarshalWands::MoveWandsByMouse(float Value) {
}

void AMinigame_MarshalWands::MoveWandsByKeyboard(float Value) {
}

void AMinigame_MarshalWands::MoveWands(float Value) {
}

bool AMinigame_MarshalWands::IsPlaneFacingPlayer() {
    return false;
}

bool AMinigame_MarshalWands::IsPlaneCloseEnoughToCenter() {
    return false;
}

void AMinigame_MarshalWands::InputPrimaryActionSpace(bool bIsPressed) {
}

void AMinigame_MarshalWands::InputF(bool bIsPressed) {
}

void AMinigame_MarshalWands::FinishMinigame(bool bSuccessful) {
}

void AMinigame_MarshalWands::ExitMinigame_TimerElapsed(bool bSuccessful) {
}

void AMinigame_MarshalWands::ExitMinigame(bool bSuccessful) {
}

void AMinigame_MarshalWands::ConfirmLiftOff() {
}

void AMinigame_MarshalWands::ClearJoeDialogTimers() {
}

bool AMinigame_MarshalWands::CanConfirmLiftOff() {
    return false;
}

void AMinigame_MarshalWands::CalculatePlaneDistenceFromCenter() {
}

void AMinigame_MarshalWands::AscendPlane() {
}

void AMinigame_MarshalWands::AcceleratePlane() {
}


