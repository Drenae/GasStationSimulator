#pragma once
#include "CoreMinimal.h"
#include "ObjectiveBase.h"
#include "RVChallenge.generated.h"

class URVChallengeCondition;

UCLASS(Blueprintable)
class GSS2_API URVChallenge : public UObjectiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URVChallengeCondition*> ChallengeConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ChallengeFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
public:
    URVChallenge();

protected:
    UFUNCTION(BlueprintCallable)
    void OnConditionUpdated(URVChallengeCondition* UpdatedCondition);
    
    UFUNCTION(BlueprintCallable)
    void OnConditionCompleted(URVChallengeCondition* FinishedCondition);
    
};

