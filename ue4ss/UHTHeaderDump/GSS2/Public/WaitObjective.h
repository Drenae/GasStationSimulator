#pragma once
#include "CoreMinimal.h"
#include "ObjectiveBase.h"
#include "WaitObjective.generated.h"

UCLASS(Blueprintable)
class GSS2_API UWaitObjective : public UObjectiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitingTime;
    
    UWaitObjective();

};

