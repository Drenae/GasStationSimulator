#include "EmployeeTask.h"
#include "Templates/SubclassOf.h"

UEmployeeTask::UEmployeeTask() {
    this->RegenerateEnergyPerMinute = 1.00f;
    this->MoneyPerMinute = 1.00f;
    this->RequirementEmployeeSkill = EEmployeeSkill::Cleaning;
    this->bCanEarnMoney = true;
}

void UEmployeeTask::WorkTime(FTimeStruct Time) {
}

AActor* UEmployeeTask::FindAndAddAsEmployee(TSubclassOf<AInteractableActor> InteractableActorClass, TArray<AActor*> Actors) {
    return NULL;
}


