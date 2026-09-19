#pragma once
#include "CoreMinimal.h"
#include "ObjectiveBase.h"
#include "QuestChallenge.h"
#include "ChallengeObjective.generated.h"

class UChallengeObjective;

UCLASS(Blueprintable)
class GSS2_API UChallengeObjective : public UObjectiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestChallenge> ObjectiveChallenges;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ChallengeFinished;
    
public:
    UChallengeObjective();

protected:
    UFUNCTION(BlueprintCallable)
    void OnObjectiveChallengesCompleted(UChallengeObjective* FinishedObjective);
    
};

