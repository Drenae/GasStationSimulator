#include "EmployeeShiftsHelper.h"

UEmployeeShiftsHelper::UEmployeeShiftsHelper() {
}

void UEmployeeShiftsHelper::RemoveAsTargetActor(UObject* WorldContextObject, AInteractableBuilding* BuldingToRemove, EEmployeeTask TaskType) {
}

bool UEmployeeShiftsHelper::IsTargetActorWorthToGoOrAvailable(AAICharacterBase* Employee, AInteractableBuilding* BuildingToLookForCustomers) {
    return false;
}

EEmployeeTask UEmployeeShiftsHelper::GetTaskType(UObject* WorldContextObject, UTaskBase* Task) {
    return EEmployeeTask::CLEANING;
}

EShiftType UEmployeeShiftsHelper::GetCurrentShift(UObject* WorldContextObject) {
    return EShiftType::DAY;
}

void UEmployeeShiftsHelper::ForceNextTaskOrHome(UObject* WorldContextObject, AAICharacterBase* Employee) {
}

bool UEmployeeShiftsHelper::ForceNextTask(UObject* WorldContextObject, AAICharacterBase* Employee) {
    return false;
}

bool UEmployeeShiftsHelper::CheckIfStationDirty(UObject* WorldContextObject) {
    return false;
}

bool UEmployeeShiftsHelper::CheckIfShelvesNeedRestock(UObject* WorldContextObject) {
    return false;
}

bool UEmployeeShiftsHelper::CheckIfCanMoveToNextTask(UObject* WorldContextObject, AAICharacterBase* Employee, int32& NewTaskIndex, bool& bCurrentTaskConsent) {
    return false;
}

void UEmployeeShiftsHelper::AddAsTargetActor(UObject* WorldContextObject, AInteractableBuilding* NewBuilding, EEmployeeTask TaskType) {
}

void UEmployeeShiftsHelper::ActivateEmployeeNewTask(UObject* WorldContextObject, AAICharacterBase* Employee, int32 NewTaskIndex) {
}


