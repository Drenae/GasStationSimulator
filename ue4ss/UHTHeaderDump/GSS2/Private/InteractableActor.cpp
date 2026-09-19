#include "InteractableActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent

AInteractableActor::AInteractableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->RotateToActor = true;
    this->BuildingType = EBuildingType::OTHER;
    this->IgnoreQueue = true;
    this->bCanEmployeeUse = true;
    this->MaxActorLevel = 3;
    this->CurrentActorLevel = 1;
    this->InWayPointAcceptanceDistance = 150.00f;
    this->InPathPointAcceptanceDistance = 200.00f;
    this->QueueType = EQueueType::EQT_None;
    this->bLoadingFromSaveGame = false;
    this->EmployeeePosition = CreateDefaultSubobject<UArrowComponent>(TEXT("EmployeeePositionArrowComp"));
    this->LoadUUID = 0;
    this->UnloadUUID = 100;
    this->ArrowComponent->SetupAttachment(RootComponent);
    this->EmployeeePosition->SetupAttachment(RootComponent);
}

void AInteractableActor::UpdatePathStations() {
}

void AInteractableActor::UpdatePath() {
}

void AInteractableActor::UpdateMesh_Implementation(const int32 ActorLevel, bool bLoadedFromSaveGame, bool bNewVersion) {
}

void AInteractableActor::UnlockItems(TArray<TSoftClassPtr<AItem>> ItemsToUnlock) {
}

void AInteractableActor::UnloadMaps() {
}

void AInteractableActor::SortWayPoints(TArray<FWayPoint>& OutArray) {
}


void AInteractableActor::SetActorLevel_Implementation(int32 Level, bool bLoadedFromSaveGame, bool bNewVersion) {
}

void AInteractableActor::ResetQueue() {
}

void AInteractableActor::PostLoadMapsEvent(bool bLoadedFromSave) {
}


void AInteractableActor::PerformUpgradeActions(TArray<UGameAction*> UpgradeActions) {
}

void AInteractableActor::OnEventAndItemsLoaded(TSoftClassPtr<UEventDisplay> EventDisplayToLoad, TArray<TSoftClassPtr<AItem>> ItemsToUnlock, TArray<UGameAction*> UpgradeActions) {
}

void AInteractableActor::OnEditedActor(const FString& Reason) {
}

void AInteractableActor::LoadMaps(bool bLoadedFromSave) {
}

void AInteractableActor::LoadGameBeginPlay_Implementation(bool bLoadedFromSaveGame, bool NewVersion) {
}

void AInteractableActor::LoadAndPlayEventDisplay(TSoftClassPtr<UEventDisplay> EventDisplayToLoad) {
}

bool AInteractableActor::LeaveQueue(AAICharacterBase* AICharacter, ETaskResult TaskState, bool ContinueWaiting, bool ForceLeave) {
    return false;
}

FWayPoint AInteractableActor::LeaveEmployee(AAICharacterBase* AICharacter) {
    return FWayPoint{};
}

bool AInteractableActor::IsVehicleInHisPathPoint(AAICharacterBase* Character) {
    return false;
}

bool AInteractableActor::IsQueueInTheirsPathPoints() {
    return false;
}

bool AInteractableActor::IsQueueFull() {
    return false;
}

bool AInteractableActor::IsMaxActorLevel() {
    return false;
}

bool AInteractableActor::IsAvailable_Implementation() {
    return false;
}

bool AInteractableActor::IsActorInHisWayPoint(AAICharacterBase* Character) {
    return false;
}

bool AInteractableActor::HasAnyAvailablePathPoint() {
    return false;
}

void AInteractableActor::GetQueueDetails(int32& NumberOfPeopleInQueue, int32& NumberOfPeopleWaiting, int32& NumberOfPeopleOnTheirWay) {
}

int32 AInteractableActor::GetNumPeopleInQueue() {
    return 0;
}

AAICharacterBase* AInteractableActor::GetCurrentUser() {
    return NULL;
}

AAICharacterBase* AInteractableActor::GetCurrentEmployee() {
    return NULL;
}

void AInteractableActor::GetBuildingDataToLoad_Unload(bool bLoadedFromSaveGame) {
}

int32 AInteractableActor::GetActorLevel() {
    return 0;
}

FWayPoint AInteractableActor::FindCharacter(AAICharacterBase* AICharacterBase) {
    return FWayPoint{};
}


int32 AInteractableActor::AddToQueue(AAICharacterBase* AICharacterBase) {
    return 0;
}

FWayPoint AInteractableActor::AddEmployee(AAICharacterBase* AICharacterBase, bool& Added) {
    return FWayPoint{};
}


