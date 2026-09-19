#pragma once
#include "CoreMinimal.h"
#include "QuestChallenge.h"
#include "SavedChallenge.generated.h"

USTRUCT(BlueprintType)
struct FSavedChallenge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestChallenge> SavedChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilNextChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilCompletitionCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTickEnabled;
    
    GSS2_API FSavedChallenge();
};

