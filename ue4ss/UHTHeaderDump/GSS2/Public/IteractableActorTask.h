#pragma once
#include "CoreMinimal.h"
#include "GSSTask.h"
#include "Templates/SubclassOf.h"
#include "IteractableActorTask.generated.h"

class AActor;
class AInteractableActor;
class UIteractableActorTask;

UCLASS(Blueprintable)
class GSS2_API UIteractableActorTask : public UGSSTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIteractableActorTask> DependentTaskToRemove;
    
    UIteractableActorTask();

    UFUNCTION(BlueprintCallable)
    AInteractableActor* FindAndAddAsCustomer(TSubclassOf<AInteractableActor> InteractableActorClass, TArray<AActor*> Actors, const bool bByClosest);
    
};

