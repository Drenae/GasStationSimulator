#include "EmployeeShift.h"

UEmployeeShift::UEmployeeShift() {
    this->Employee = NULL;
    this->AssignedShift = EShiftType::DAY;
    this->bAutopay = false;
    this->CurrentTaskPriority = -1;
}

bool UEmployeeShift::TryToPaySalary() {
    return false;
}

bool UEmployeeShift::TryToActivateNextTask() {
    return false;
}

void UEmployeeShift::ShiftStarted() {
}

void UEmployeeShift::ShiftFinished() {
}

void UEmployeeShift::SetTaskActivePossibility(int32 TaskPriority, bool bNewActiveValue, EShiftType CurrentShift) {
}

void UEmployeeShift::SetTargetsBinding(int32 Priority) {
}

void UEmployeeShift::SetNewEmployeeTask(int32 Priority, EEmployeeTask TaskToAssign, TSoftClassPtr<UEmployeeTask> NewTask, bool bActive) {
}

void UEmployeeShift::SetIfAutopay(bool bNewValue) {
}

void UEmployeeShift::SetEmployeeTasks(TArray<FAssignedTasksInfo> NewEmployeeTasks) {
}

void UEmployeeShift::SetEmployee(AAICharacterBase* NewEmployee) {
}

void UEmployeeShift::SetCurrentTaskPriority(int32 NewCurrentTaskPriority) {
}

void UEmployeeShift::SetAssignedShift(EShiftType NewShiftType) {
}

void UEmployeeShift::ResetLocation(FTransform ChairTransform) {
}

void UEmployeeShift::RemoveTask(int32 RemovedTaskPriority) {
}

void UEmployeeShift::RemoveTargetsBindings() {
}

void UEmployeeShift::RemoveTargetActors_byIndex(int32 TaskIndex, bool bRemoveFromArray) {
}

void UEmployeeShift::RemoveTargetActors(TSoftClassPtr<UEmployeeTask> RemovedTask, bool bRemoveFromArray) {
}

void UEmployeeShift::RemoveTargetActorBindings(AInteractableBuilding* TargetActor) {
}

void UEmployeeShift::RemoveTargetActor_byIndex(AInteractableBuilding* TargetActor, int32 TaskIndex, bool bRemoveFromArray) {
}

void UEmployeeShift::RemoveTargetActor(AInteractableBuilding* TargetActor, int32 TaskIndex) {
}

void UEmployeeShift::RemoveAsTargetActor(AInteractableBuilding* RemovedBuilding, EEmployeeTask TaskType) {
}

void UEmployeeShift::OnTaskLoaded(int32 MainTaskPriority) {
}

void UEmployeeShift::OnInitializeTaskCharacter(UTaskBase* TaskBase) {
}

void UEmployeeShift::OnFuelRestored() {
}

void UEmployeeShift::OnEmployeeLeftQueue(AAICharacterBase* LeftEmployee, AActor* TargetActor) {
}

void UEmployeeShift::OnCustomerServed(AAICharacterBase* Customer, AActor* TargetActor) {
}

void UEmployeeShift::OnCustomerArrived(AAICharacterBase* Customer, AActor* TargetActor) {
}

void UEmployeeShift::OnBeginFinishTaskCharacter(UTaskBase* TaskBase, ETaskResult TaskResult, const FString& Reason) {
}

bool UEmployeeShift::HasCurrentTaskConsent() {
    return false;
}

int32 UEmployeeShift::HasAnyTaskActivationPossibility() {
    return 0;
}

void UEmployeeShift::HandleTargetActorRemoving(AInteractableBuilding* TargetActor, int32 TaskIndex, bool bRemoveFromArray) {
}

void UEmployeeShift::GoHome() {
}

TSoftClassPtr<AInteractableActor> UEmployeeShift::GetTaskTargetActorClass(TSoftClassPtr<UEmployeeTask> Task) {
    return NULL;
}

bool UEmployeeShift::GetIfAutopay() {
    return false;
}

TArray<FAssignedTasksInfo> UEmployeeShift::GetEmployeeTasks() {
    return TArray<FAssignedTasksInfo>();
}

AAICharacterBase* UEmployeeShift::GetEmployee() {
    return NULL;
}

int32 UEmployeeShift::GetCurrentTaskPriority() {
    return 0;
}

EShiftType UEmployeeShift::GetAssignedShift() {
    return EShiftType::DAY;
}

bool UEmployeeShift::ForceNextTask() {
    return false;
}

int32 UEmployeeShift::FindTaskToMoveTo(int32 OngoingTaskPriority, bool bForceActivation) {
    return 0;
}

int32 UEmployeeShift::FindTask(TSoftClassPtr<UEmployeeTask> TaskToFind) {
    return 0;
}

void UEmployeeShift::FindAndAddAsTargetActor(int32 TaskPriority, TSoftClassPtr<AInteractableActor> ActorToFind) {
}

void UEmployeeShift::FillTaskStruct(EEmployeeTask WantedTask, FTaskStruct& OutTask) {
}

void UEmployeeShift::DelegateFunctionCalled(AActor* TargetActor) {
}

bool UEmployeeShift::CheckIfNextTaskAvailable(int32 TaskPriority, bool bForceActivation) {
    return false;
}

bool UEmployeeShift::CheckIfCanActivateTask(int32 TaskPriority, bool& bCurrentTakConsent) {
    return false;
}

bool UEmployeeShift::CanActivateNextTask(int32& TaskToActivate, bool& bCurrentTakConsent) {
    return false;
}

void UEmployeeShift::AssignShift(EShiftType NewAssignedShift, EShiftType CurrentActiveShift) {
}

void UEmployeeShift::AddTargetBinding(AInteractableBuilding* TargetActor) {
}

void UEmployeeShift::AddTargetActor(int32 Priority, TSoftObjectPtr<AInteractableBuilding> TargetActorToAdd) {
}

void UEmployeeShift::AddAsTargetActor(AInteractableBuilding* NewBuilding, EEmployeeTask TaskType) {
}

void UEmployeeShift::ActivateNewTask(int32 Priority) {
}


