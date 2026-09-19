#pragma once
#include "CoreMinimal.h"
#include "CountableObjectiveBase.h"
#include "ClearSmallTrashObjective.generated.h"

class AActor;

UCLASS(Blueprintable)
class GSS2_API UClearSmallTrashObjective : public UCountableObjectiveBase {
    GENERATED_BODY()
public:
    UClearSmallTrashObjective();

protected:
    UFUNCTION(BlueprintCallable)
    void OnActorDestroyed(AActor* DestroyedActor);
    
};

