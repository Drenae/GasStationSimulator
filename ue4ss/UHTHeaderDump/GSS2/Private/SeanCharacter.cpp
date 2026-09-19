#include "SeanCharacter.h"

ASeanCharacter::ASeanCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsBarkDisabled = false;
    this->bIsInsideCrane = false;
    this->bIsExitingCrane = false;
    this->bIsDancingInWorkshop = false;
    this->bIsWorkingOnWreck = false;
    this->bWreckPickedUpWithCrane = false;
    this->bWreckDroppedWithCrane = false;
    this->bJustFinishedDefaultSubtask = false;
    this->CurrentWreckArea = NULL;
    this->CurrentMoveTargetArea = NULL;
    this->CurrentWreck = NULL;
    this->CheckForWorkInterval = 3.00f;
    this->IsInWorkshopYLocation = 21348.81f;
    this->CurrentTaskBark = ESeanTaskBark::NONE;
    this->bWasLastBarkSystemTimeRecorded = false;
    this->bPlayerLeftJunkyard = false;
    this->TimeSinceLastBark = 0.00f;
    this->CurrentBarkInterval = 0.00f;
    this->MinBarkInterval = 10.00f;
    this->MaxBarkInterval = 20.00f;
    this->MinGreetingBarkInterval = 3.00f;
    this->MaxGreetingBarkInterval = 5.00f;
    this->BarkDistance = 600.00f;
    this->CraneBarkDistance = 1200.00f;
    this->PlayerLeftJunkyardDistance = 13000.00f;
    this->GreetingTimeThresholdSeconds = 360.00f;
    this->LongGreetingTimeThresholdHours = 168;
    this->BarkCheckInterval = 1.00f;
    this->MinCarSalePriceToBark = 1000.00f;
    this->JunkyardManager = NULL;
    this->ActionManagerSubsystem = NULL;
}

void ASeanCharacter::TryTeleportToDanceAtPlatform(ACarWreckPlaceableArea* TargetArea) {
}

bool ASeanCharacter::TryProcessNextWreck(bool& CurrentTasksCancelled) {
    return false;
}

void ASeanCharacter::TalkToSean() {
}

bool ASeanCharacter::SimpleInteraction_Implementation(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent) {
    return false;
}

void ASeanCharacter::ResetSean(bool QueueBark) {
}

void ASeanCharacter::QueueSpecialBark(ENPCConversationType BarkType) {
}

void ASeanCharacter::ProcessSpecificWreck(ECarWreckMarking TaskType, ACarWreckPlaceableArea* WreckArea, bool ReplaceCurrentTasks) {
}

void ASeanCharacter::OnWreckProcessingStart() {
}

void ASeanCharacter::OnWreckProcessingEnd() {
}

void ASeanCharacter::OnWreckPlayerProcessingStarted(AJunkyardCarWreck* Wreck) {
}

void ASeanCharacter::OnWreckPlacedOnArea(ACarWreckPlaceableArea* Area, AJunkyardCarWreck* Wreck) {
}

void ASeanCharacter::OnWreckMarked(AJunkyardCarWreck* MarkedWreck, ECarWreckMarking NewMarking) {
}

void ASeanCharacter::OnWreckAttractedToMagnet(AJunkyardCarWreck* Wreck) {
}

void ASeanCharacter::OnUfoUsed() {
}

void ASeanCharacter::OnNewGameplayStuffUnlockStateChanged(FUnlockableGameplayStuffState GameplayStuffUnlocked) {
}

void ASeanCharacter::OnNewFameLevelUnlocked(int32 NewLevel) {
}

void ASeanCharacter::OnDefaultTaskStarted() {
}

void ASeanCharacter::OnCraneEntered(bool EnteredByPlayer) {
}

void ASeanCharacter::OnCarSaleFinished(const FSaleSlot& SaleSlot, const bool bCarSold) {
}

void ASeanCharacter::OnBuildingUpgraded(EBuildingType BuildingType, int32 BuildingLevel, bool bLoadedFromSave) {
}

bool ASeanCharacter::IsWreckMarkingEnabled() {
    return false;
}

bool ASeanCharacter::IsProcessingPossible(FSeanTaskRow ProcessingTask, ACarWreckPlaceableArea* TargetWreckArea) {
    return false;
}

bool ASeanCharacter::IsInWorkshop() {
    return false;
}

ACarWreckPlaceableArea* ASeanCharacter::FindFreeWreckAreaOfType(ECarWreckPlaceableAreaType AreaType, AActor* DistanceReferenceActor) {
    return NULL;
}

void ASeanCharacter::FindClosestWreckToProcess(bool& WreckFound, ACarWreckPlaceableArea*& OutputWreckArea, FSeanTaskRow& OutputTaskStruct) {
}

bool ASeanCharacter::DisplayInteractionInfo_Implementation(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent, UStaticMeshComponent*& StaticMeshComponent) {
    return false;
}

void ASeanCharacter::DisableInteractionInfo_Implementation(APawn* Pawn) {
}

void ASeanCharacter::CheckForWorkToDo() {
}

void ASeanCharacter::CheckForBark() {
}

void ASeanCharacter::CancelCurrentTask() {
}

bool ASeanCharacter::CanBeInteractable_Implementation(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent) {
    return false;
}

void ASeanCharacter::BarkDialog(ENPCConversationType BarkType, bool IgnoreBarkDistance) {
}


