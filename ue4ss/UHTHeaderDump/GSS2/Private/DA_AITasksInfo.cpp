#include "DA_AITasksInfo.h"

UDA_AITasksInfo::UDA_AITasksInfo() {
}

UDA_SpecificAITask* UDA_AITasksInfo::GetTaskByCustomerType(const UObject* WorldContextObject, const ECustomerType CustomerType) {
    return NULL;
}

TSoftClassPtr<UIteractableActorTask> UDA_AITasksInfo::GetGeneralTaskByInteractableTaskType(const EInteractableTaskType InteractableTaskType) {
    return NULL;
}


