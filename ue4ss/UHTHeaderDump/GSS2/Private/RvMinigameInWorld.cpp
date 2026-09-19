#include "RvMinigameInWorld.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ARvMinigameInWorld::ARvMinigameInWorld(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root Component"));
    this->SceneRootComponent = (USceneComponent*)RootComponent;
    this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Component"));
    this->MainSKM = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Main SKM"));
    this->MeshToAttach = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh To Attach"));
    this->ExtraVisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Extra Visual Mesh"));
    this->ExtraSKM = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Extra SKM"));
    this->PositioningArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Positioning Arrow"));
    this->bDisableCrosshair = true;
    this->bDisablePlayerTick = true;
    this->bShowMouseCursor = true;
    this->bTakePlayerControl = true;
    this->bOverrideCamera = true;
    this->BlendOutCameraMode = ERVMinigameCameraBlendOutMode::END_MINIGAME;
    this->bHideUI = false;
    this->CountdownWidget = NULL;
    this->Difficulty = EGuestServiceDifficulty::EASY;
    this->MinigameStage = ERVMinigameStage::INACTIVE;
    this->ItemBeingHeld = NULL;
    this->AttachmentPoint = NULL;
    this->GuestServiceSpot = NULL;
    this->PositioningAcceptanceDistance = 500.00f;
    this->CameraComponent->SetupAttachment(RootComponent);
    this->ExtraSKM->SetupAttachment(RootComponent);
    this->ExtraVisualMesh->SetupAttachment(RootComponent);
    this->MainSKM->SetupAttachment(RootComponent);
    this->MeshToAttach->SetupAttachment(RootComponent);
    this->PositioningArrow->SetupAttachment(RootComponent);
}

bool ARvMinigameInWorld::TryToStartMinigame(ARvGuestServiceSpot* Service, EGuestServiceDifficulty ChosenDifficulty) {
    return false;
}

void ARvMinigameInWorld::TryToEndMinigameWithScoringWithDelay() {
}

void ARvMinigameInWorld::TryToEndMinigameWithScoring() {
}

void ARvMinigameInWorld::TryToEndMinigameWithDelay(bool bSuccess) {
}

bool ARvMinigameInWorld::TryToEndMinigame(bool bSuccess) {
    return false;
}

void ARvMinigameInWorld::StartMinigameLate_Implementation(ARvGuestServiceSpot* Service, EGuestServiceDifficulty ChosenDifficulty) {
}

void ARvMinigameInWorld::StartMiniGame_Implementation(ARvGuestServiceSpot* Service, EGuestServiceDifficulty ChosenDifficulty) {
}

void ARvMinigameInWorld::SetPhase_Implementation(FName Phase) {
}

void ARvMinigameInWorld::OnTipAction_Implementation(bool bIsPressed) {
}

void ARvMinigameInWorld::OnPlayerSecondaryAction_Implementation(bool bIsPressed) {
}

void ARvMinigameInWorld::OnPlayerPrimaryAction_Implementation(bool bIsPressed) {
}

void ARvMinigameInWorld::OnMoveRightAction_Implementation(float Value) {
}

void ARvMinigameInWorld::OnMoveForwardAction_Implementation(float Value) {
}

void ARvMinigameInWorld::OnLeftShoulderAction_Implementation(bool bPressed) {
}

void ARvMinigameInWorld::OnJumpAction_Implementation(bool bIsPressed) {
}

void ARvMinigameInWorld::OnInspectModeAction_Implementation(bool bPressed) {
}

void ARvMinigameInWorld::OnGamepadModeToggle_Implementation(bool bNewGamepadMode) {
}

void ARvMinigameInWorld::OnEscape_Implementation(bool bIsPressed) {
}

void ARvMinigameInWorld::OnDPadUpAction_Implementation(bool bPressed) {
}

void ARvMinigameInWorld::OnDPadRightAction_Implementation(bool bPressed) {
}

void ARvMinigameInWorld::OnDPadLeftAction_Implementation(bool bPressed) {
}

void ARvMinigameInWorld::OnDPadDownAction_Implementation(bool bPressed) {
}



bool ARvMinigameInWorld::IsGamepadMode() const {
    return false;
}

FRvMinigameStageInfo ARvMinigameInWorld::GetMinigameStageInfo() const {
    return FRvMinigameStageInfo{};
}

ERVMinigameStage ARvMinigameInWorld::GetMinigameStage() const {
    return ERVMinigameStage::INACTIVE;
}

URvMinigameBaseSettings* ARvMinigameInWorld::GetMinigameSettings() const {
    return NULL;
}

void ARvMinigameInWorld::EndMinigameLate_Implementation(bool bSuccess) {
}

void ARvMinigameInWorld::EndMinigame_Implementation(bool bSuccess) {
}

void ARvMinigameInWorld::DetachHandleItemFromPoint() {
}

bool ARvMinigameInWorld::CheckScore_Implementation() {
    return false;
}

bool ARvMinigameInWorld::CanStartMinigame(ARvGuestServiceSpot* Service, EGuestServiceDifficulty ChosenDifficulty) {
    return false;
}

bool ARvMinigameInWorld::CanEndMinigame(bool bSuccess) {
    return false;
}

void ARvMinigameInWorld::AttachHandleItemToPoint() {
}


