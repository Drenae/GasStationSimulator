#include "NPAIControllerBase.h"
#include "NPPathFollowingComponent.h"

ANPAIControllerBase::ANPAIControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UNPPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->BehaviorTree = NULL;
    this->BlackboardData = NULL;
}

void ANPAIControllerBase::StartAILogicWithDelay() {
}

void ANPAIControllerBase::StartAILogic() {
}

void ANPAIControllerBase::SetAIActionState(ENPAIActionState NewAIActionState) {
}

void ANPAIControllerBase::InitializeTaskList_Implementation() {
}

ENPAIActionState ANPAIControllerBase::GetAIActionState() {
    return ENPAIActionState::Action;
}


