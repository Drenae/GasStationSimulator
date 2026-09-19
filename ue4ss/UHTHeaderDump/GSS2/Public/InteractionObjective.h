#pragma once
#include "CoreMinimal.h"
#include "ObjectiveBase.h"
#include "InteractionObjective.generated.h"

class AActor;

UCLASS(Blueprintable)
class GSS2_API UInteractionObjective : public UObjectiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> ActorToInteractWith;
    
    UInteractionObjective();

protected:
    UFUNCTION(BlueprintCallable)
    void OnInteraction(AActor* Actor);
    
};

