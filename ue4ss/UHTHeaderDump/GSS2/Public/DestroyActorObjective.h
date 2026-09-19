#pragma once
#include "CoreMinimal.h"
#include "ObjectiveBase.h"
#include "DestroyActorObjective.generated.h"

class AActor;

UCLASS(Blueprintable)
class GSS2_API UDestroyActorObjective : public UObjectiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> DesiredActor;
    
    UDestroyActorObjective();

};

