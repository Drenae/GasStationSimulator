#include "GSSPlayerCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PhysicsHandleComponent -FallbackName=PhysicsHandleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent
#include "AnalyticsDataCollectorComponent.h"
#include "EconomyTracker.h"
#include "PostapoSkeletalMeshComponent.h"
#include "StatKeeper.h"
#include "Templates/SubclassOf.h"

AGSSPlayerCharacter::AGSSPlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
    this->ActiveMovementState = EMovementState::NORMAL;
    this->FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
    this->SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    this->BaseBodyMesh = CreateDefaultSubobject<UPostapoSkeletalMeshComponent>(TEXT("BaseBodyMesh"));
    this->Hands_SMC = CreateDefaultSubobject<UPostapoSkeletalMeshComponent>(TEXT("Hands"));
    this->Legs_SMC = CreateDefaultSubobject<UPostapoSkeletalMeshComponent>(TEXT("Legs"));
    this->HandlePoint = CreateDefaultSubobject<UArrowComponent>(TEXT("HandlePoint"));
    this->HeldGrinderPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("HeldGrinderPoint"));
    this->PhysicsHandleComponent = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("PhysicsHandleComponent"));
    this->GameState_GSS = NULL;
    this->GSSPlayerController = NULL;
    this->StatKeeper = CreateDefaultSubobject<UStatKeeper>(TEXT("StatKeeper"));
    this->EconomyTracker = CreateDefaultSubobject<UEconomyTracker>(TEXT("EconomyTracker"));
    this->Sound = CreateDefaultSubobject<UAudioComponent>(TEXT("RemoteDialoguesComponent"));
    this->InteractionRange = 350.00f;
    this->CharacterState = EPlayerState::Walk;
    this->CharacterMinigameState = ECharacterState::NORMAL;
    this->BaseTurnRate = 45.00f;
    this->BaseLookUpRate = 45.00f;
    this->bUsingMotionControllers = false;
    this->RMBTimeHold = 0.00f;
    this->ChangeQuestlineHoldTimeCurrent = 0.00f;
    this->ChangeQuestlineHoldTimeMax = 1.00f;
    this->LMBTimeHold = 0.00f;
    this->FTimeHold = 0.00f;
    this->bRMBPressed = false;
    this->bLMBPressed = false;
    this->bFPressed = false;
    this->bChangeQuestlinePressed = false;
    this->bInTutorialReading = false;
    this->LavaJumpStrength = 50000.00f;
    this->IsRocketJumpEnabled = true;
    this->MaxRocketJumpExplosionDistance = 500.00f;
    this->RocketJumpZPower = 200000.00f;
    this->RocketJumpXYPower = 100000.00f;
    this->RocketJumpAirControl = 0.50f;
    this->RocketJumpAirControlDuration = 10.00f;
    this->DefaultKeyboardInputActions = NULL;
    this->DefaultGamepadInputActions = NULL;
    this->DefaultKeyboardInputAxis = NULL;
    this->DefaultGamepadInputAxis = NULL;
    this->bGamepadModeActive = false;
    this->CurInventory = NULL;
    this->TechTreeManager = NULL;
    this->TechTreeManagerClass = NULL;
    this->bInspectModeOn = false;
    this->bPreventCharacterMovement = false;
    this->bPreventCameraMovement = false;
    this->bInvertX = false;
    this->bInvertY = false;
    this->CameraSpeedX = 1.00f;
    this->CameraSpeedY = 1.00f;
    this->bRumble = false;
    this->bToogleSprintMode = false;
    this->bToogleInspectMode = false;
    this->bOnLadder = false;
    this->BindWidget = NULL;
    this->DisplayedActor = NULL;
    this->DisplayedComponent = NULL;
    this->UIActionsAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("UIActionsAudioComponent"));
    this->ObjectiveSwitchSound = NULL;
    this->AnalyticsDataCollectorComponent = CreateDefaultSubobject<UAnalyticsDataCollectorComponent>(TEXT("AnalyticsDataCollectorComponent"));
    this->bIsInFerrisCabin = false;
    this->BaseBodyMesh->SetupAttachment(SpringArmComponent);
    this->FirstPersonCameraComponent->SetupAttachment(BaseBodyMesh);
    this->HandlePoint->SetupAttachment(FirstPersonCameraComponent);
    this->Hands_SMC->SetupAttachment(BaseBodyMesh);
    this->HeldGrinderPoint->SetupAttachment(FirstPersonCameraComponent);
    this->InteractBox->SetupAttachment(RootComponent);
    this->Legs_SMC->SetupAttachment(BaseBodyMesh);
    this->Sound->SetupAttachment(RootComponent);
    this->SpringArmComponent->SetupAttachment(RootComponent);
}

void AGSSPlayerCharacter::YButton_Released() {
}

void AGSSPlayerCharacter::YButton_Presssed() {
}

void AGSSPlayerCharacter::XButton_Released() {
}

void AGSSPlayerCharacter::XButton_Presssed() {
}

void AGSSPlayerCharacter::TryToStartHoldingInteractions(EHoldButton ButtonToHold) {
}



void AGSSPlayerCharacter::ToggleSnapToGridAction_Released() {
}

void AGSSPlayerCharacter::ToggleSnapToGridAction() {
}




void AGSSPlayerCharacter::TipAction_Released() {
}

void AGSSPlayerCharacter::TipAction_Pressed() {
}



void AGSSPlayerCharacter::SprintAction_ToggleRelease() {
}

void AGSSPlayerCharacter::SprintAction_Toggle() {
}

void AGSSPlayerCharacter::SprintAction_Released() {
}

void AGSSPlayerCharacter::SprintAction_Pressed() {
}


AItem* AGSSPlayerCharacter::SpawnPlayerItem(TSubclassOf<AItem> ItemClass, bool AsPublic, FTransform SpawnTransform) {
    return NULL;
}

AInteractableActor* AGSSPlayerCharacter::SpawnInteractableActor(AInteractableActor* InteractableActor) {
    return NULL;
}

AInteractableActor* AGSSPlayerCharacter::SpawnGhostInteractableActor(TSubclassOf<AInteractableActor> AInteractableActorClass) {
    return NULL;
}

void AGSSPlayerCharacter::SetTooltipPart(FPartTooltip TooltipToSet) {
}

void AGSSPlayerCharacter::SetPreventCharacterMovement(bool bNewValue) {
}

void AGSSPlayerCharacter::SetPreventCameraMovement(bool bNewValue) {
}

void AGSSPlayerCharacter::SetPauseMenu(UUserWidget* NewPauseMenu) {
}

void AGSSPlayerCharacter::SetMovementState(EMovementState NewMovementState) {
}



void AGSSPlayerCharacter::SetIsInPhotoMode(bool IsInPhotoMode) {
}



void AGSSPlayerCharacter::SetCharacterState(ECharacterState NewState) {
}

void AGSSPlayerCharacter::SecondaryAction_Released() {
}

void AGSSPlayerCharacter::SecondaryAction() {
}

void AGSSPlayerCharacter::RotateRight_Released() {
}

void AGSSPlayerCharacter::RotateRight_Presssed() {
}


void AGSSPlayerCharacter::RotateLeft_Released() {
}

void AGSSPlayerCharacter::RotateLeft_Presssed() {
}

void AGSSPlayerCharacter::RightTrigger_Released() {
}

void AGSSPlayerCharacter::RightTrigger_Presssed() {
}

void AGSSPlayerCharacter::RightBumper_Released() {
}

void AGSSPlayerCharacter::RightBumper_Presssed() {
}

void AGSSPlayerCharacter::ResetUnboundInputs() {
}

void AGSSPlayerCharacter::ResetPlayerPosition() {
}

void AGSSPlayerCharacter::ReleaseHeldItem() {
}


void AGSSPlayerCharacter::PrimaryAction_Released() {
}

void AGSSPlayerCharacter::PrimaryAction() {
}

void AGSSPlayerCharacter::PlayUiSound(USoundCue* UiSound) {
}



void AGSSPlayerCharacter::OnGamePadSettings() {
}



void AGSSPlayerCharacter::OnAppliedSoundSettings() {
}

void AGSSPlayerCharacter::OnAppliedGameplaySettings() {
}

void AGSSPlayerCharacter::OnAppliedControlSettings() {
}

void AGSSPlayerCharacter::MoveMarshalWands(float Val) {
}

void AGSSPlayerCharacter::Minigame_Action01_Released() {
}

void AGSSPlayerCharacter::Minigame_Action01_Pressed() {
}

void AGSSPlayerCharacter::LeftTrigger_Released() {
}

void AGSSPlayerCharacter::LeftTrigger_Presssed() {
}

void AGSSPlayerCharacter::LeftBumper_Released() {
}

void AGSSPlayerCharacter::LeftBumper_Presssed() {
}

bool AGSSPlayerCharacter::IsPartHovered(UJunkyardCarPartBase* PartToCheck) {
    return false;
}

bool AGSSPlayerCharacter::IsHoldComponent(const UPrimitiveComponent* Other) const {
    return false;
}

void AGSSPlayerCharacter::InspectModeAction_Released() {
}

void AGSSPlayerCharacter::InspectModeAction_Pressed() {
}

void AGSSPlayerCharacter::HighlightCinemaTrash_Released() {
}

void AGSSPlayerCharacter::HighlightCinemaTrash_Pressed() {
}

void AGSSPlayerCharacter::HighlightAirplaneHoles_Released() {
}

void AGSSPlayerCharacter::HighlightAirplaneHoles_Pressed() {
}


void AGSSPlayerCharacter::HideTooltipPart() {
}

void AGSSPlayerCharacter::HideCircularMenu() {
}


TArray<TEnumAsByte<EObjectTypeQuery>> AGSSPlayerCharacter::GetTraceTypes() const {
    return TArray<TEnumAsByte<EObjectTypeQuery>>();
}

UStatKeeper* AGSSPlayerCharacter::GetStatKeeper() {
    return NULL;
}

bool AGSSPlayerCharacter::GetPreventCharacterMovement() {
    return false;
}


bool AGSSPlayerCharacter::GetPlayerInputStatus() {
    return false;
}

UUserWidget* AGSSPlayerCharacter::GetPauseMenu() {
    return NULL;
}

bool AGSSPlayerCharacter::GetIsSprinting() {
    return false;
}

bool AGSSPlayerCharacter::GetIsInPhotoMode() {
    return false;
}

bool AGSSPlayerCharacter::GetIsHandleActorEqualBYSoftClass(TSoftClassPtr<AItem> ClassToCompare) {
    return false;
}

bool AGSSPlayerCharacter::GetIsHandleActorEqualBYClass(UClass* ClassToCompare) {
    return false;
}

bool AGSSPlayerCharacter::GetIsHandleActor_Product() {
    return false;
}

bool AGSSPlayerCharacter::GetIsHandleActor_KeyItem() {
    return false;
}

bool AGSSPlayerCharacter::GetGamepadModeActive() {
    return false;
}

UEconomyTracker* AGSSPlayerCharacter::GetEconomyTracker() {
    return NULL;
}

FPartTooltip AGSSPlayerCharacter::GetCurrentPartTooltip() {
    return FPartTooltip{};
}



void AGSSPlayerCharacter::FollowQuestlineReleased() {
}

void AGSSPlayerCharacter::FollowQuestlinePressed() {
}

void AGSSPlayerCharacter::EscapeAction() {
}



AItem* AGSSPlayerCharacter::EditItem_Implementation(AItem* Item) {
    return NULL;
}

void AGSSPlayerCharacter::E_ActionPressed() {
}

void AGSSPlayerCharacter::DPadUp_Released() {
}

void AGSSPlayerCharacter::DPadUp_Presssed() {
}

void AGSSPlayerCharacter::DPadRight_Released() {
}

void AGSSPlayerCharacter::DPadRight_Presssed() {
}

void AGSSPlayerCharacter::DPadLeft_Released() {
}

void AGSSPlayerCharacter::DPadLeft_Presssed() {
}

void AGSSPlayerCharacter::DPadDown_Released() {
}

void AGSSPlayerCharacter::DPadDown_Presssed() {
}

void AGSSPlayerCharacter::DisableInspectMode() {
}


bool AGSSPlayerCharacter::CrashGame() {
    return false;
}

void AGSSPlayerCharacter::ClearHandleActor(const bool bClearConstructorModeLeftovers) {
}

void AGSSPlayerCharacter::CircularMenu_Released_Gamepad() {
}

void AGSSPlayerCharacter::CircularMenu_Relased() {
}

void AGSSPlayerCharacter::CircularMenu_Presssed() {
}

void AGSSPlayerCharacter::CircularMenu_Pressed_Gamepad() {
}

bool AGSSPlayerCharacter::CanOpenInventory() {
    return false;
}

bool AGSSPlayerCharacter::CanHandleSecondaryActionEnd() {
    return false;
}

void AGSSPlayerCharacter::BButton_Released() {
}

void AGSSPlayerCharacter::BButton_Presssed() {
}


void AGSSPlayerCharacter::AButton_Released() {
}

void AGSSPlayerCharacter::AButton_Presssed() {
}

void AGSSPlayerCharacter::AbortHoldingInteractions() {
}


