#include "IteractableActorTask.h"
#include "Templates/SubclassOf.h"

UIteractableActorTask::UIteractableActorTask() {
    this->DependentTaskToRemove = NULL;
}

AInteractableActor* UIteractableActorTask::FindAndAddAsCustomer(TSubclassOf<AInteractableActor> InteractableActorClass, TArray<AActor*> Actors, const bool bByClosest) {
    return NULL;
}


