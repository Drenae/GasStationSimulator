#include "IceCreamBuilding.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AIceCreamBuilding::AIceCreamBuilding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OutlinedActor = NULL;
    this->State = EIceCreamMakingState::DEFAULT;
    this->SkeletalComponentBell = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalComponentBell"));
    this->MinigameCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MinigameCamera"));
    this->ContainersSpawnPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("ContainersSpawnPoint"));
    this->ConesSpawnPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("ConesSpawnPoint"));
    this->Light = CreateDefaultSubobject<UChildActorComponent>(TEXT("Light"));
    this->LeftHolder = CreateDefaultSubobject<UChildActorComponent>(TEXT("LeftHolder"));
    this->RightHolder = CreateDefaultSubobject<UChildActorComponent>(TEXT("RightHolder"));
    this->WaterBowl = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WaterBowl"));
    this->ChainBell = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ChainBell"));
    this->ChainSmallCones = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ChainSmallCones"));
    this->ChainMediumCones = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ChainMediumCones"));
    this->ChainBigCones = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ChainBigCones"));
    this->BellAnimStep = 200.00f;
    this->ScoopingStepSize = 0.10f;
    this->MinDistanceToUpdateScooping = 10.00f;
    this->SlowScoopingFactor = 10.00f;
    this->SoundScoopingLoop = NULL;
    this->SoundGrabCone = NULL;
    this->SoundReleaseCone = NULL;
    this->SoundFreezerLoopSmall = NULL;
    this->SoundFreezerLoopBig = NULL;
    this->SoundPlaceScoop = NULL;
    this->SoundWater = NULL;
    this->bPlacingScoop = false;
    this->bStatusVisible = false;
    this->SpawnedScoop = NULL;
    this->Spoon = NULL;
    this->PickedUpCone = NULL;
    this->ScoopingContainer = NULL;
    this->BellAnimInstance = NULL;
    this->GamepadIdx = 0;
    this->MouseSpeedMultiplier = 5;
    this->LeftHolderIndex = 0;
    this->RightHolderIndex = 0;
    this->ChainBell->SetupAttachment(RootComponent);
    this->ChainBigCones->SetupAttachment(RootComponent);
    this->ChainMediumCones->SetupAttachment(RootComponent);
    this->ChainSmallCones->SetupAttachment(RootComponent);
    this->ConesSpawnPoint->SetupAttachment(RootComponent);
    this->ContainersSpawnPoint->SetupAttachment(RootComponent);
    this->LeftHolder->SetupAttachment(RootComponent);
    this->Light->SetupAttachment(RootComponent);
    this->MinigameCamera->SetupAttachment(RootComponent);
    this->RightHolder->SetupAttachment(RootComponent);
    this->SkeletalComponentBell->SetupAttachment(RootComponent);
    this->WaterBowl->SetupAttachment(RootComponent);
}

void AIceCreamBuilding::UseBell(bool bPressed) {
}

void AIceCreamBuilding::UpdateOrder() {
}








FIceCreamInfo AIceCreamBuilding::UI_GetFlavourInfo(EIceCreamFlavours Flavour) {
    return FIceCreamInfo{};
}

void AIceCreamBuilding::SpoonCleaning(bool bPressed) {
}

void AIceCreamBuilding::SetMinigameActive(bool bActive) {
}

void AIceCreamBuilding::SecondaryAction(bool bPressed) {
}

void AIceCreamBuilding::RepopulateGamepadTargets() {
}

void AIceCreamBuilding::PrimaryAction(bool bPressed) {
}





void AIceCreamBuilding::PlaceScoopAction(bool bPressed) {
}


void AIceCreamBuilding::MoveMouseUpDown(float Val) {
}

void AIceCreamBuilding::MoveMouseToPreviousSpot(bool bPressed) {
}

void AIceCreamBuilding::MoveMouseToPreviousSection(bool bPressed) {
}

void AIceCreamBuilding::MoveMouseToNextSpot(bool bPressed) {
}

void AIceCreamBuilding::MoveMouseToNextSection(bool bPressed) {
}

void AIceCreamBuilding::MoveMouseToNextGamepadLocation(bool bGoForward, bool bChangeSection) {
}

void AIceCreamBuilding::MoveMouseLeftRight(float Val) {
}

void AIceCreamBuilding::MoveGamepadIdx(bool bGoForward) {
}

bool AIceCreamBuilding::IsConeEmpty(int32 GamepadIndex) {
    return false;
}

void AIceCreamBuilding::IncrementGamepadIdx() {
}

EIceCreamPadTargetSection AIceCreamBuilding::GetPreviousSection(EIceCreamPadTargetSection Section) {
    return EIceCreamPadTargetSection::UPPER_SECTION;
}

EIceCreamPadTargetSection AIceCreamBuilding::GetNextSection(EIceCreamPadTargetSection Section) {
    return EIceCreamPadTargetSection::UPPER_SECTION;
}

void AIceCreamBuilding::FinishOrderEmployee() {
}

void AIceCreamBuilding::ExitMinigameAction(bool bPressed) {
}

void AIceCreamBuilding::DecrementGamepadIdx() {
}

void AIceCreamBuilding::ConeRemoving(bool bPressed) {
}

void AIceCreamBuilding::CheckStatusAction(bool bPressed) {
}

bool AIceCreamBuilding::CanTakeNextScoop() {
    return false;
}

void AIceCreamBuilding::CalculateNextGamepadLocation(bool bGoForward, bool bChangeSection) {
}


