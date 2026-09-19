#include "JunkyardCarWreck.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=NopeAISystem -ObjectName=NPSmartObjectComponent -FallbackName=NPSmartObjectComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetComponent -FallbackName=WidgetComponent

AJunkyardCarWreck::AJunkyardCarWreck(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMesh"));
    this->MainMesh = (UStaticMeshComponent*)RootComponent;
    this->RoofMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RoofMesh"));
    this->TrunkMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TrunkMesh"));
    this->UnderbodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UnderbodyMesh"));
    this->Battery = NULL;
    this->sparkplug = NULL;
    this->FrontWheels = NULL;
    this->BackWheels = NULL;
    this->mirrors = NULL;
    this->spoiler = NULL;
    this->exhaust = NULL;
    this->turbo = NULL;
    this->Engine = NULL;
    this->InteractBox = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractBox"));
    this->MagnetSnapBox = CreateDefaultSubobject<UBoxComponent>(TEXT("MagnetSnapBox"));
    this->MagnetTraceBox = CreateDefaultSubobject<UBoxComponent>(TEXT("MagnetTraceBox"));
    this->SeanTaskPosition = CreateDefaultSubobject<UArrowComponent>(TEXT("SeanTaskPosition"));
    this->MarkerWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("MarkerWidget"));
    this->NPSmartObjectComponent = CreateDefaultSubobject<UNPSmartObjectComponent>(TEXT("NPSmartObjectComponent"));
    this->WreckName = FText::FromString(TEXT("Wreck Name"));
    this->CarTier = EJunkyardPartRarity::FAKE;
    this->WreckType = EJunkyardCarWreckType::CAR1;
    this->bRusty = true;
    this->bIsBeingDelivered = false;
    this->bTmpMagnetAttractionDisabled = false;
    this->BasePrice = 0.00f;
    this->CustomizationMaterialInterface = NULL;
    this->DisablePhysicsTime = 2.00f;
    this->EnableCollisionSounds = false;
    this->WrecksSettings = NULL;
    this->DisableOverlapsTime = 5.00f;
    this->MarkerDisplayDistance = 1000.00f;
    this->bReservedBySean = false;
    this->bWrenchBlocked = false;
    this->bReservedByPlayer = false;
    this->bIsMarkerVisible = false;
    this->bIsCraneUsedByPlayer = false;
    this->bLoadingAttachedToCrane = false;
    this->bBoundCraneEvents = false;
    this->bInspectMode = false;
    this->CarWreckState = ECarWreckState::FREE;
    this->CurrentMarking = ECarWreckMarking::NONE;
    this->PlaceableAreaType = ECarWreckPlaceableAreaType::MAX;
    this->ActionManagerSubsystem = NULL;
    this->JunkyardManager = NULL;
    this->PlayerCharacter = NULL;
    this->GES = NULL;
    this->SpawnedWreckTooltip = NULL;
    this->bCanGetAttractedByMagnet = true;
    this->AttractedByMagnetResetTime = 0.50f;
    this->AreaMissedCheckTime = 5.00f;
    this->ShowAllSpotsOccupiedMessageCooldown = 4.00f;
    this->LastDropClosestArea = NULL;
    this->IsAttractedByMagnet = false;
    this->IsInteractionInfoDisplayed = false;
    this->InteractBox->SetupAttachment(RootComponent);
    this->MagnetSnapBox->SetupAttachment(RootComponent);
    this->MagnetTraceBox->SetupAttachment(RootComponent);
    this->MarkerWidget->SetupAttachment(RootComponent);
    this->NPSmartObjectComponent->SetupAttachment(RootComponent);
    this->RoofMesh->SetupAttachment(RootComponent);
    this->SeanTaskPosition->SetupAttachment(RootComponent);
    this->TrunkMesh->SetupAttachment(RootComponent);
    this->UnderbodyMesh->SetupAttachment(RootComponent);
}

void AJunkyardCarWreck::UpdateCustomizablePartTierOnlyMaterial(EJunkyardCarPartType Slot, EJunkyardPartRarity Rarity) {
}

void AJunkyardCarWreck::TryFinishProject() {
}

void AJunkyardCarWreck::StartCustomInteraction() {
}

bool AJunkyardCarWreck::SimpleInteraction_Implementation(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent) {
    return false;
}

void AJunkyardCarWreck::ShowReservedBySeanMessage() {
}

void AJunkyardCarWreck::SetWholeWreckHighlightVisibility(bool NewVisibility, int32 StencilValue, bool bParts) {
}

void AJunkyardCarWreck::SetState(ECarWreckState NewState) {
}

void AJunkyardCarWreck::SetReservedBySean(bool NewIsReservedBySean) {
}

void AJunkyardCarWreck::SetReservedByPlayer(bool NewIsReservedByPlayer) {
}

void AJunkyardCarWreck::SetPlaceableAreaType(ECarWreckPlaceableAreaType NewPlaceableAreaType) {
}

void AJunkyardCarWreck::SetPhysicsEnabled(bool IsEnabled) {
}

void AJunkyardCarWreck::SetPhotoPath(const FString& InPhotoPath) {
}

void AJunkyardCarWreck::SetMobility(bool IsMobile) {
}

void AJunkyardCarWreck::SetLockPhysics(bool IsLocked) {
}

void AJunkyardCarWreck::SetIsHeldByMagnet_Implementation(bool NewIsHeldByMagnet) {
}

void AJunkyardCarWreck::SetCurrentMarking(ECarWreckMarking NewMarking, bool IgnoreSeanReservation, bool LoadingGame) {
}

void AJunkyardCarWreck::SetCraneMarkerVisibility(bool IsVisible) {
}

void AJunkyardCarWreck::SetAllCollisionsEnabled(bool IsEnabled) {
}

void AJunkyardCarWreck::ResetAttractedByMagnet() {
}

void AJunkyardCarWreck::RemovePartFromSlot(EJunkyardCarPartType Slot, bool bApplyEffect) {
}

void AJunkyardCarWreck::RefreshMaterialForPartInSlot(const EJunkyardCarPartType& Slot, bool bGhost, bool bSynchronously) {
}

void AJunkyardCarWreck::PlayEventOnDeattached_Implementation() {
}



void AJunkyardCarWreck::OnWheelsHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


void AJunkyardCarWreck::OnPlayerEnterInspectMode(bool bPressed) {
}

void AJunkyardCarWreck::OnPartInteracted(const EJunkyardCarPartType& Slot) {
}

void AJunkyardCarWreck::OnMinigameStateChanged() {
}

void AJunkyardCarWreck::OnMinigameResult(bool Result, EJunkyardCarPartType Slot, FStorageCarPart PartStruct) {
}

void AJunkyardCarWreck::OnInteractBoxOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AJunkyardCarWreck::OnInteractBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AJunkyardCarWreck::OnCraneHighlightsToggled(bool Showighlights) {
}

void AJunkyardCarWreck::OnCraneExited(bool ExitedyPlayer) {
}

void AJunkyardCarWreck::OnCraneEntered(bool EnteredByPlayer) {
}

void AJunkyardCarWreck::OnCarPartMouseOver(bool bHovered, EJunkyardCarPartType CarPartSlot) {
}

void AJunkyardCarWreck::OnAttractedToMagnetEvent_Implementation() {
}

void AJunkyardCarWreck::OnActorSnappedToMagnet(AActor* SnappedActor) {
}

void AJunkyardCarWreck::OnActorDetachedFromMagnet(AActor* DetachedActor) {
}

void AJunkyardCarWreck::LoadAttachedToCrane() {
}

bool AJunkyardCarWreck::IsSpecificMarkingPossible(ECarWreckMarking Marking, ECarWreckMarkingError& MarkingError) {
    return false;
}

bool AJunkyardCarWreck::IsReservedBySean() {
    return false;
}

bool AJunkyardCarWreck::IsReservedByPlayer() {
    return false;
}

bool AJunkyardCarWreck::IsOtherWreckAttachedToMagnet() {
    return false;
}

bool AJunkyardCarWreck::IsOnWreckSpot() const {
    return false;
}

bool AJunkyardCarWreck::IsOnPlatform() const {
    return false;
}

bool AJunkyardCarWreck::IsOnExhibitionSpot() const {
    return false;
}

void AJunkyardCarWreck::HighlightPartsForInspectMode(bool bGhosts, bool bHighlight) {
}

bool AJunkyardCarWreck::HasCustomSetPhysicsEnabled_Implementation() {
    return false;
}

FCarPartData AJunkyardCarWreck::GetWreckAverageStats(FStorageCarPart OptionalModifier) {
    return FCarPartData{};
}

ECarWreckState AJunkyardCarWreck::GetState() {
    return ECarWreckState::FREE;
}

UPrimitiveComponent* AJunkyardCarWreck::GetPrimitiveToApplyFore_Implementation() {
    return NULL;
}

ECarWreckPlaceableAreaType AJunkyardCarWreck::GetPlaceableAreaType() {
    return ECarWreckPlaceableAreaType::WRECKS_SPOT;
}

FString AJunkyardCarWreck::GetPhotoPath() {
    return TEXT("");
}

bool AJunkyardCarWreck::GetIsHeldByMagnet_Implementation() {
    return false;
}

bool AJunkyardCarWreck::GetIsAttractedByMagnet() {
    return false;
}

ECarWreckMarking AJunkyardCarWreck::GetCurrentMarking() {
    return ECarWreckMarking::NONE;
}

UPrimitiveComponent* AJunkyardCarWreck::GetAttractedPrimitive_Implementation() {
    return NULL;
}

TArray<UActorComponent*> AJunkyardCarWreck::GetAllInstalledParts() {
    return TArray<UActorComponent*>();
}

bool AJunkyardCarWreck::DisplayInteractionInfo_Implementation(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent, UStaticMeshComponent*& StaticMeshComponent) {
    return false;
}

void AJunkyardCarWreck::DisassembleAllParts() {
}

void AJunkyardCarWreck::DisableOverlapEvents() {
}

void AJunkyardCarWreck::DisableInteractionInfoDelayed() {
}

void AJunkyardCarWreck::DisableInteractionInfo_Implementation(APawn* Pawn) {
}

void AJunkyardCarWreck::DestroyWreckTooltip() {
}

void AJunkyardCarWreck::CustomSetPhysicsEnabled_Implementation(bool IsPhysicsEnabled) {
}

void AJunkyardCarWreck::CreateCarParts() {
}

void AJunkyardCarWreck::CheckIfAreaMissed() {
}

bool AJunkyardCarWreck::CanWreckBeMovedByPlayer() {
    return false;
}

bool AJunkyardCarWreck::CanRemoveAllParts(bool& NoSpaceGarage, bool& NoSpaceJunkyard) {
    return false;
}

bool AJunkyardCarWreck::CanCollisionSoundsBePlayed() {
    return false;
}

bool AJunkyardCarWreck::CanBeInteractable_Implementation(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent) {
    return false;
}

bool AJunkyardCarWreck::CanActorGetAttracted_Implementation() {
    return false;
}

float AJunkyardCarWreck::CalculateWreckBasePrice(FStorageCarPart OptionalModifier, bool bIncludeTribute) {
    return 0.0f;
}

bool AJunkyardCarWreck::AreAllMountablePartsPlannedOrInstalled() const {
    return false;
}

UJunkyardCarPartCustomizable* AJunkyardCarWreck::AddPartToSlot(TSoftClassPtr<UActorComponent> PartComponentClass, EJunkyardCarPartType Slot, bool bVisible, EJunkyardPartRarity Tier) {
    return NULL;
}


