#pragma once
#include "CoreMinimal.h"
#include "ObjectiveBase.h"
#include "OnPlayerSpawnActorObjective.generated.h"

class AActor;

UCLASS(Blueprintable)
class GSS2_API UOnPlayerSpawnActorObjective : public UObjectiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> DesiredActorClass;
    
    UOnPlayerSpawnActorObjective();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSpawnPlayerActor(const AActor* Actor);
    
};

