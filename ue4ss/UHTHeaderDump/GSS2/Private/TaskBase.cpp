#include "TaskBase.h"

UTaskBase::UTaskBase() {
    this->AICharacterBase = NULL;
    this->Assistant = NULL;
    this->TaskAreaType = ETaskAreaType::None;
    this->TaskResult = ETaskResult::TaskSuccess;
    this->AcceptableRadious = 50.00f;
    this->WaitTime = 5.00f;
    this->bIsGoHomeTask = false;
    this->LeftTime = 5.00f;
    this->ShouldFinishOnGameLoad = false;
    this->RenownReason = ERenown_Reasons::NO_RENOWN;
    this->TimeToAutoFInishTask = 7.00f;
}

bool UTaskBase::UpdateTaskProgress(FTaskProgress NewTaskProgress) {
    return false;
}

void UTaskBase::TickObject_Implementation(float DeltaTime) {
}

void UTaskBase::StopAssistant_Implementation() {
}

void UTaskBase::StartTask_Implementation(ACharacter* Character) {
}

void UTaskBase::StartAssistant_Implementation(ACharacter* Instaginator) {
}

void UTaskBase::SetTickEnabled(bool Enable) {
}

void UTaskBase::SetTaskTargetActor(AActor* InActor) {
}

void UTaskBase::SetShouldFinishOnGameLoad(bool NewValue) {
}

void UTaskBase::RemoveReasonToStopTask(const FTaskStopReason TaskStopReason) {
}

void UTaskBase::InitializeTask_Implementation(AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress) {
}

bool UTaskBase::HasReasonToStopTask() {
    return false;
}

bool UTaskBase::HasAssistant() {
    return false;
}

AActor* UTaskBase::GetTaskTargetActor() {
    return NULL;
}

void UTaskBase::GetTaskProgress(const FString& ObjectiveName, int32& CurrentTaskProgress, int32& MaxTaskProgress) {
}

FText UTaskBase::GetTaskInfoTransform() {
    return FText::GetEmpty();
}

FTaskStopReason UTaskBase::GetReasonToStopTask() {
    return FTaskStopReason{};
}

UAnimMontage* UTaskBase::GetMontageBasedOnMesh(AAICharacterBase* CharacterBase) {
    return NULL;
}

void UTaskBase::FinishEndTaskEmployeeWithNoAICustomer() {
}

void UTaskBase::FinishEndTask_Implementation() {
}

void UTaskBase::FinishBeginTask_Implementation(const ETaskResult TaskState, const FString& FinishReason) {
}

int32 UTaskBase::FindCompatibileTask(TArray<FTaskStruct> Tasks, ETaskAreaType TaskType) {
    return 0;
}

void UTaskBase::AutoFinishTask() {
}

void UTaskBase::AddReasonToStopTask(const FTaskStopReason TaskStopReason) {
}


