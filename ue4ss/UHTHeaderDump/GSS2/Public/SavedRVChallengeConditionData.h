#pragma once
#include "CoreMinimal.h"
#include "TimeStruct.h"
#include "SavedRVChallengeConditionData.generated.h"

USTRUCT(BlueprintType)
struct FSavedRVChallengeConditionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct TimeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConditionMet;
    
    GSS2_API FSavedRVChallengeConditionData();
};

