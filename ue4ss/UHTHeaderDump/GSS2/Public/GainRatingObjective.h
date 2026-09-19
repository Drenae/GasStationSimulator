#pragma once
#include "CoreMinimal.h"
#include "CountableObjectiveBase.h"
#include "GainRatingObjective.generated.h"

UCLASS(Blueprintable)
class GSS2_API UGainRatingObjective : public UCountableObjectiveBase {
    GENERATED_BODY()
public:
    UGainRatingObjective();

    UFUNCTION(BlueprintCallable)
    void AddProgress(float AddedRating);
    
};

