#pragma once
#include "CoreMinimal.h"
#include "RVChallengeCondition.h"
#include "RV_ChallengeCondition_TrackRelax.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API URV_ChallengeCondition_TrackRelax : public URVChallengeCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelaxThreshold;
    
    URV_ChallengeCondition_TrackRelax();

    UFUNCTION(BlueprintCallable)
    void CheckRelax(float CurrentRelax);
    
};

