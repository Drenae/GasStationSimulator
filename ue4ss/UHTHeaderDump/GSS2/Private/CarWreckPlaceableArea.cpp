#include "CarWreckPlaceableArea.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ACarWreckPlaceableArea::ACarWreckPlaceableArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMesh"));
    this->AreaType = ECarWreckPlaceableAreaType::WRECKS_SPOT;
    this->bHasCraneMarker = false;
    this->bKeepSnappedCarRotation = false;
    this->bKeepPhysicsAfterSnap = true;
    this->CraneDroppableArea = CreateDefaultSubobject<UBoxComponent>(TEXT("MagnetDroppableArea"));
    this->MagnetDroppableSpot = CreateDefaultSubobject<UBoxComponent>(TEXT("MagnetDroppableSpot"));
    this->MainMesh = (UStaticMeshComponent*)RootComponent;
    this->MarkerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MarkerMesh"));
    this->WreckPlacementPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("WreckPlacementPoint"));
    this->SeanTeleportLocation = CreateDefaultSubobject<UArrowComponent>(TEXT("SeanTeleportLocation"));
    this->SeanDanceLocation = CreateDefaultSubobject<UArrowComponent>(TEXT("SeanDanceLocation"));
    this->CurrentWreck = NULL;
    this->ExhibitionSlotIndex = 0;
    this->PlatformZRotation = 0.00f;
    this->bIsAreaEnabled = true;
    this->bIsAreaLoadingWithWreck = false;
    this->WreckSnapProgressSpeed = 2000.00f;
    this->DisablePhysicsTime = 4.00f;
    this->EnablePhysicsTime = 0.10f;
    this->DisableOverlapsTime = 5.00f;
    this->SnapWreckCooldown = 3.00f;
    this->CheckWreckAfterRemovingWheelsTime = 4.00f;
    this->WreckSnapProgress = 0.00f;
    this->IsCraneUsedByPlayer = false;
    this->bIsWaitingForLoadDisable = false;
    this->IsCraneUsedBySean = false;
    this->bReservedBySean = false;
    this->IsSnapWreckCooldownActive = false;
    this->GES = NULL;
    this->ActionManagerSubsystem = NULL;
    this->JunkyardManager = NULL;
    this->CraneDroppableArea->SetupAttachment(RootComponent);
    this->MagnetDroppableSpot->SetupAttachment(RootComponent);
    this->MarkerMesh->SetupAttachment(RootComponent);
    this->SeanDanceLocation->SetupAttachment(RootComponent);
    this->SeanTeleportLocation->SetupAttachment(RootComponent);
    this->WreckPlacementPoint->SetupAttachment(RootComponent);
}

void ACarWreckPlaceableArea::SnapCurrentWreck(float ExtraPhysicsDelay) {
}

void ACarWreckPlaceableArea::SetReservedBySean(bool NewIsReservedBySean) {
}

void ACarWreckPlaceableArea::SetMarkerVisibility(bool IsVisible) {
}

void ACarWreckPlaceableArea::SetAreaEnabled(bool IsEnabled) {
}

void ACarWreckPlaceableArea::RemoveWreck() {
}

void ACarWreckPlaceableArea::PlaceWreck(AActor* Wreck, bool ShouldSnap, float ExtraPhysicsDelay) {
}

void ACarWreckPlaceableArea::OnWreckSpawnedOnArea(AActor* Wreck, float EnablePhysicsDelay) {
}

void ACarWreckPlaceableArea::OnWreckAttractedToMagnet() {
}

void ACarWreckPlaceableArea::OnWheelsRemovedFromWreckTimerEnd() {
}

void ACarWreckPlaceableArea::OnWheelsRemovedFromWreck() {
}

void ACarWreckPlaceableArea::OnLoadedEnableArea() {
}

void ACarWreckPlaceableArea::OnLoadedDisableArea() {
}

void ACarWreckPlaceableArea::OnCraneHighlightsToggled(bool Showighlights) {
}

void ACarWreckPlaceableArea::OnCraneExited(bool ExitedyPlayer) {
}

void ACarWreckPlaceableArea::OnCraneEntered(bool EnteredByPlayer) {
}

void ACarWreckPlaceableArea::OnAreaLoadedWithWreck(AActor* Wreck) {
}

void ACarWreckPlaceableArea::OnAreaBeginLoadingWithWreck(AActor* Wreck) {
}

void ACarWreckPlaceableArea::OnActorSnappedToMagnet(AActor* SnappedActor) {
}

void ACarWreckPlaceableArea::OnActorDetachedFromMagnet(AActor* DetachedActor) {
}


bool ACarWreckPlaceableArea::IsWreckInTheAir() {
    return false;
}

bool ACarWreckPlaceableArea::IsWreckAttachedToMagnet() {
    return false;
}

bool ACarWreckPlaceableArea::IsUnLocked() {
    return false;
}

bool ACarWreckPlaceableArea::IsReservedBySean() {
    return false;
}

bool ACarWreckPlaceableArea::HasFallingWreckInDroppableArea() {
    return false;
}

void ACarWreckPlaceableArea::EndSnapWreckCooldown() {
}

void ACarWreckPlaceableArea::EnablePhysicsAfterPlacement() {
}

void ACarWreckPlaceableArea::DisablePhysicsAfterPlacement() {
}

void ACarWreckPlaceableArea::DisableOverlapEvents() {
}

bool ACarWreckPlaceableArea::CheckIfWreckStillOnArea() {
    return false;
}

void ACarWreckPlaceableArea::CheckForNewWreckOnArea(float DeltaTime) {
}

bool ACarWreckPlaceableArea::CanDropActor(AActor* ActorToDrop) {
    return false;
}


