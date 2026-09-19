#include "ShiftsManager.h"

UShiftsManager::UShiftsManager() {
    this->CurrentShift = EShiftType::DAY;
    this->EmployeeSchedulingInfo = NULL;
}

void UShiftsManager::Test_AddOwnedEmployees() {
}

void UShiftsManager::SetOwnedEmployees(TArray<UEmployeeShift*> NewOwnedEmployees) {
}

void UShiftsManager::SetNewEmployeeTask(UEmployeeShift* EmployeeShift, int32 Priority, EEmployeeTask TaskToAssign, TSoftClassPtr<UEmployeeTask> NewTask, TSoftClassPtr<AInteractableActor> TargetActorClass, bool bActive) {
}

void UShiftsManager::SetEmployeeTask(AAICharacterBase* Employee, EEmployeeTask Task, int32 Priority) {
}

void UShiftsManager::SetEmployeeBinding(UEmployeeShift* Employee) {
}

void UShiftsManager::SetEmployeeAutopay(UEmployeeShift* Employee, bool bNewAutopayValue) {
}

bool UShiftsManager::SetEmployeeAssignedShift(UEmployeeShift* EmployeeShift, EShiftType NewShift, FText& AlertToShow, float& Duration) {
    return false;
}

void UShiftsManager::SetAssignedTaskActivationPossibility(UEmployeeShift* EmployeeShift, int32 TaskPriority, bool bNewActiveValue) {
}

void UShiftsManager::SaveEmployee(TArray<FSavedEmployee>& SavedEmployees) {
}

void UShiftsManager::ResetSpecificShiftEmployeesStamina(EShiftType Shift) {
}

void UShiftsManager::ResetEmployeeLocation(UEmployeeShift* Employee, FTransform ChairTransform) {
}

void UShiftsManager::RemoveTask(UEmployeeShift* EmployeeShift, int32 Priority) {
}

void UShiftsManager::RemoveFiredEmployeeByRef(UEmployeeShift* FiredEmployee) {
}

void UShiftsManager::RemoveFiredEmployeeByIndex(int32 FiredEmployeeIndex) {
}

void UShiftsManager::RemoveAsTargetActor(AInteractableBuilding* RemovedBuilding, EEmployeeTask TaskType) {
}

void UShiftsManager::OnWorldBeginPlay() {
}

void UShiftsManager::OnTaskLoaded(TSoftObjectPtr<UEmployeeShift> EmployeeShift, int32 MainTaskPriority) {
}

void UShiftsManager::OnGameLoaded(bool bGameLoaded) {
}

void UShiftsManager::NextShiftStartsCheck(int32 Hour) {
}

void UShiftsManager::NewShiftStarted(EShiftType NewShiftType) {
}

void UShiftsManager::LoadEmployeeTask(UEmployeeShift* EmployeeShift, int32 MainTaskPriority) {
}

void UShiftsManager::LoadEmployees(TArray<FSavedEmployee>& SavedEmployees, TArray<AAICharacterBase*> Employees) {
}

void UShiftsManager::LoadEmployee(TArray<FSavedEmployee>& SavedEmployees, AAICharacterBase* Employee) {
}

FText UShiftsManager::GetTaskName(UEmployeeShift* Employee, int32 Priority) {
    return FText::GetEmpty();
}

TArray<UEmployeeShift*> UShiftsManager::GetOwnedEmployees() {
    return TArray<UEmployeeShift*>();
}

UEmployeeShift* UShiftsManager::GetOwnedEmployee(AAICharacterBase* Employee) {
    return NULL;
}

EShiftType UShiftsManager::GetCurrentShift() {
    return EShiftType::DAY;
}

FAssignedTasksInfo UShiftsManager::GetAssignedTaskInfo(UEmployeeShift* Employee, int32 Priority) {
    return FAssignedTasksInfo{};
}

bool UShiftsManager::ForceNextTask(UEmployeeShift* Employee) {
    return false;
}

void UShiftsManager::EmployeeHired(AAICharacterBase* Employee) {
}

void UShiftsManager::EmployeeFired(AAICharacterBase* FiredEmployee) {
}

void UShiftsManager::CreateSetEmployeeShift(AAICharacterBase* Employee) {
}

void UShiftsManager::CheckSetCurrentShift(int32 Hour) {
}

bool UShiftsManager::CheckIfHasShiftConsent(UEmployeeShift* Employee) {
    return false;
}

bool UShiftsManager::CheckIfCanMoveToNextTask(AAICharacterBase* Employee, int32& NewTaskIndex, bool& bCurrentTaskConsent) {
    return false;
}

bool UShiftsManager::CanAssignEmployeeShift(UEmployeeShift* EmployeeShift, FText& AlertToShow, float& Duration) {
    return false;
}

void UShiftsManager::AssignNewEmployeeTask_byTaskEnum(UEmployeeShift* EmployeeShift, int32 Priority, EEmployeeTask TaskToAssign, bool bActive) {
}

void UShiftsManager::AssignNewEmployeeTask_bySPtr(UEmployeeShift* EmployeeShift, int32 Priority, TSoftClassPtr<UEmployeeTask> TaskToAssign, bool bActive) {
}

void UShiftsManager::AssignNewEmployeeTask_bySkill(UEmployeeShift* EmployeeShift, int32 Priority, EEmployeeSkill TaskSkillToAssign, bool bActive) {
}

void UShiftsManager::AddOwnedEmployee(UEmployeeShift* NewEmployee) {
}

void UShiftsManager::AddAsTargetActor(AInteractableBuilding* NewBuilding, EEmployeeTask TaskType) {
}


