#include "NPAICharacterBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAutoPossessAI -FallbackName=EAutoPossessAI
#include "NPCharacterMovementComponent.h"
#include "NPWidgetComponentFace.h"

ANPAICharacterBase::ANPAICharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UNPCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->WidgetCharacterInfo = CreateDefaultSubobject<UNPWidgetComponentFace>(TEXT("WidgetInfo"));
    this->bSaveByAISubsystem = 1.00f;
    this->DistanceToLoad = 0.00f;
    this->PercentDistanceToUnload = 1.50f;
    this->ShouldAttemptToUnstuck = false;
    this->UnstuckDebugOnly = false;
    this->PositionCheckIntervalSeconds = 0.50f;
    this->PositionCheckSpanSeconds = 2.50f;
    this->UnstuckDistanceTreshold = 30.00f;
    this->UnstuckTeleportDistance = 200.00f;
    this->UnstuckTeleportRadius = 150.00f;
    this->UnstuckFailTeleportDistanceMultiplier = 1.60f;
    this->UnstuckFailTeleportRadiusMultiplier = 1.40f;
    this->UnstuckRepeatDistance = 100.00f;
    this->MaxUnstuckAttempts = 5;
    this->bIsWalkingToPoint = false;
    this->CurrentWalkToCallbackTarget = NULL;
    this->OwnerAIController = NULL;
    this->NPAISpawner = NULL;
    this->CurrentActiveAITask = NULL;
    this->bBlockLoadAnimationsOnGameLoad = false;
    this->InteractableActor = NULL;
    this->ReservedSmartObjectComponent = NULL;
    this->bWaitingForWalkToPointTask = false;
    this->WidgetCharacterInfo->SetupAttachment(RootComponent);
}

void ANPAICharacterBase::WalkToPoint(FTargetPointStruct TargetPoint, TArray<FNPAITaskStruct> FollowingTasks, FLatentActionInfo LatentInfo, bool ForceEndCurrentTasks) {
}

void ANPAICharacterBase::TryUnstuckCharacter(FVector TargetLocation, bool& ReachedTarget) {
}

void ANPAICharacterBase::TryAdjustTargetPointToNavmesh() {
}

FNPAITaskStruct ANPAICharacterBase::SetNextRandomTask() {
    return FNPAITaskStruct{};
}

void ANPAICharacterBase::SetInteractableActor(AActor* InInteractableActor) {
}

void ANPAICharacterBase::ReplaceAITasks(FNPAITaskStruct AITaskStruct) {
}

void ANPAICharacterBase::RemoveAITask(int32 Index) {
}

void ANPAICharacterBase::OnUnstuckReset() {
}

void ANPAICharacterBase::OnCurrentTaskFinishedCallback() {
}

bool ANPAICharacterBase::IsTaskScheduled(TSoftClassPtr<UNPAITaskBase> TaskToFind) {
    return false;
}

UNPSmartObjectComponent* ANPAICharacterBase::GetReservedSmartObject() {
    return NULL;
}

UNPCharacterMovementComponent* ANPAICharacterBase::GetNPCharacterMovement() {
    return NULL;
}

ANPAIControllerBase* ANPAICharacterBase::GetNPAIControllerBase() {
    return NULL;
}

FNPAITaskStruct ANPAICharacterBase::GetNextAITask() {
    return FNPAITaskStruct{};
}

AActor* ANPAICharacterBase::GetInteractableActor() {
    return NULL;
}

void ANPAICharacterBase::FinishAITask(const FNPTaskFinishReason TaskStopReason) {
}

void ANPAICharacterBase::CancelWalkToPoint() {
}

void ANPAICharacterBase::AddAITask(FNPAITaskStruct AITaskStruct, int32 Index) {
}


