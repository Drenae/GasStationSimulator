#pragma once
#include "CoreMinimal.h"
#include "RVMinigamesDifficultyUnlockThresholds.generated.h"

USTRUCT(BlueprintType)
struct FRVMinigamesDifficultyUnlockThresholds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfCompletedMinigamesToUnlockMediumDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfCompletedMinigamesToUnlockHardDifficulty;
    
    GSS2_API FRVMinigamesDifficultyUnlockThresholds();
};

