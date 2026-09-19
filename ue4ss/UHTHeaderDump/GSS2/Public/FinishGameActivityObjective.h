#pragma once
#include "CoreMinimal.h"
#include "EGameActivityType.h"
#include "ObjectiveBase.h"
#include "FinishGameActivityObjective.generated.h"

UCLASS(Blueprintable)
class GSS2_API UFinishGameActivityObjective : public UObjectiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameActivityType GameActivityType;
    
    UFinishGameActivityObjective();

protected:
    UFUNCTION(BlueprintCallable)
    void FOnGameActivityFinished(EGameActivityType FinishedActivityType);
    
};

