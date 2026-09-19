#include "NPAITaskBase.h"

UNPAITaskBase::UNPAITaskBase() {
    this->OwnerAICharacter = NULL;
    this->OwnerAIControllerBase = NULL;
    this->TargetActor = NULL;
    this->bRepeatTask = true;
    this->CurrentStateTime = 0.00f;
    this->AcceptableRadius = 50.00f;
    this->ProgressOfTasks.AddDefaulted(1);
}

bool UNPAITaskBase::UpdateTaskProgress(const FString& ObjectiveName, int32 AddedProgress) {
    return false;
}

void UNPAITaskBase::StartTask_Implementation() {
}

void UNPAITaskBase::SetTickEnabled(bool Enable) {
}


bool UNPAITaskBase::IsTargetPointReached() {
    return false;
}

FNPAITaskProgress UNPAITaskBase::GetTaskProgress(const FString& ObjectiveName) {
    return FNPAITaskProgress{};
}

FNPTaskFinishReason UNPAITaskBase::GetReasonToFinishAITask() {
    return FNPTaskFinishReason{};
}

ENPAIActionState UNPAITaskBase::GetCurrentAIActionState() {
    return ENPAIActionState::Action;
}

void UNPAITaskBase::ForceEndTask_Implementation() {
}

void UNPAITaskBase::FinishEndTask() {
}

void UNPAITaskBase::FinishBeginTask_Implementation(const FNPTaskFinishReason TaskStopReason) {
}


void UNPAITaskBase::EndPlayNPAITaskBase(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

bool UNPAITaskBase::AddAITaskProgress(FNPAITaskProgress AITaskProgress) {
    return false;
}


