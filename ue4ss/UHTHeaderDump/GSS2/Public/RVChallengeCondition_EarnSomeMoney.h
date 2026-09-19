#pragma once
#include "CoreMinimal.h"
#include "EEconomyDetailedYieldType.h"
#include "RVChallengeCondition.h"
#include "RVChallengeCondition_EarnSomeMoney.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API URVChallengeCondition_EarnSomeMoney : public URVChallengeCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoneyNeeded;
    
    URVChallengeCondition_EarnSomeMoney();

    UFUNCTION(BlueprintCallable)
    void TrackAqquiredMoney(const float CharacterMoney, const float Difference, EEconomyDetailedYieldType YieldType);
    
};

