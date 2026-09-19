#include "EmployeeTasksDataAsset.h"

UEmployeeTasksDataAsset::UEmployeeTasksDataAsset() {
}

FEmployeeTaskInfo UEmployeeTasksDataAsset::GetTaskInfo_bySkill(EEmployeeSkill TaskToFind) {
    return FEmployeeTaskInfo{};
}

FEmployeeTaskInfo UEmployeeTasksDataAsset::GetTaskInfo_byRef(UTaskBase* TaskToFind) {
    return FEmployeeTaskInfo{};
}

FEmployeeTaskInfo UEmployeeTasksDataAsset::GetTaskInfo_byPtr(TSoftClassPtr<UEmployeeTask> TaskToFind) {
    return FEmployeeTaskInfo{};
}

FEmployeeTaskInfo UEmployeeTasksDataAsset::GetTaskInfo_byETask(EEmployeeTask TaskToFind) {
    return FEmployeeTaskInfo{};
}

int32 UEmployeeTasksDataAsset::GetStartShiftHour(EShiftType ShiftType) {
    return 0;
}


