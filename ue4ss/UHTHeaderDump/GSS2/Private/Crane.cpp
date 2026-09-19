#include "Crane.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ACrane::ACrane(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBoxComponent>(TEXT("BoxCollision"))) {
    this->bMagnetActive = false;
    this->bHideTooltips = false;
    this->bHideHighlights = false;
    this->bReservedBySean = false;
    this->CurrentCameraIndex = 0;
    this->MagnetArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("AttractedActorTransform"));
    this->NpcEnteringPosition = CreateDefaultSubobject<UArrowComponent>(TEXT("NpcEnteringPosition"));
    this->NpcMoveToPosition = CreateDefaultSubobject<UArrowComponent>(TEXT("NpcMoveToPosition"));
    this->PlayerExitPosition = CreateDefaultSubobject<UArrowComponent>(TEXT("PlayerExitPosition"));
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->MagnetArmComponent = NULL;
    this->bGamepadConnected = false;
    this->CameraRotationSpeed = 1.00f;
    this->CameraMinVerticalRotation = -80.00f;
    this->CameraMaxVerticalRotation = -50.00f;
    this->DeactivateAnimInstanceDelay = 5.00f;
    this->SeanMoveAcceptableDistance = 20.00f;
    this->SeanMoveAcceptableYaw = 5.00f;
    this->SeanDesiredZDistance = 500.00f;
    this->AutoArmDesiredZ = 900.00f;
    this->AutoArmDesiredZAcceptableDistance = 10.00f;
    this->CollisionChannelToIgnore = ECC_Vehicle;
    this->CyllinderActionRange = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MagnetRange"));
    this->bMinigameActive = false;
    this->MinigameWidgetClass = NULL;
    this->MinigameWidgetRef = NULL;
    this->CollisionMesh = (UBoxComponent*)RootComponent;
    this->CraneAnimInstance = NULL;
    this->CurrentCameraHorizontalRotateInput = 0.00f;
    this->CurrentCameraVerticalRotateInput = 0.00f;
    this->SeanMovingToDestination = false;
    this->SeanResettingYaw = false;
    this->bDeliveryZoneOccupied = false;
    this->bStartedInZoneOccupied = false;
    this->ActionManagerSubsystem = NULL;
    this->DeliveryCollisionZoneBox = NULL;
    this->NpcEnteringPosition->SetupAttachment(RootComponent);
    this->NpcMoveToPosition->SetupAttachment(RootComponent);
    this->PlayerExitPosition->SetupAttachment(RootComponent);
    this->SkeletalMesh->SetupAttachment(RootComponent);
}

void ACrane::ToggleTooltipsVisiblity() {
}

void ACrane::ToggleHighlights() {
}

void ACrane::SetupInput() {
}


void ACrane::SetMovementEnabled(bool NewEnabled) {
}

void ACrane::SetMinigameActive(bool bNewActive) {
}

void ACrane::SetDeliveryZoneOccupied(bool IsZoneOccupied) {
}

void ACrane::SetCraneEnabled(bool NewEnabled, bool IsBeginPlay) {
}

void ACrane::SetActiveCamera(int32 CameraIndex) {
}

void ACrane::SeanMoveMagnetToLocation(FVector TargetLocation) {
}

void ACrane::RotateCameraVerticalPad(float Value) {
}

void ACrane::RotateCameraVertical(float Value) {
}

void ACrane::RotateCameraHorizontalPad(float Value) {
}

void ACrane::RotateCameraHorizontal(float Value) {
}

void ACrane::ResetCarWrecks() {
}

void ACrane::OpenCloseShredder() {
}


void ACrane::OnSeanExitCrane() {
}

void ACrane::OnSeanEnterCrane() {
}

void ACrane::OnPlayerInteraction() {
}

void ACrane::OnKeybindingsReset() {
}

void ACrane::OnFinishGameLoaded(bool GameLoaded) {
}

void ACrane::MoveSideways(float Value) {
}

bool ACrane::IsInsideDeliveryCollisionZone() {
    return false;
}

FVector ACrane::GetMagnetToLocation() {
    return FVector{};
}

bool ACrane::GetIsMinigameActive() {
    return false;
}

bool ACrane::GetDeliveryZoneOccupied() {
    return false;
}

UCraneAnimInstance* ACrane::GetAnimInstance() {
    return NULL;
}

UCraneCamera* ACrane::GetActiveCamera() {
    return NULL;
}


void ACrane::DeactivateAnimInstance() {
}

void ACrane::ClearInput() {
}

void ACrane::ChangeToNextCamera() {
}

void ACrane::CancelMinigame() {
}


