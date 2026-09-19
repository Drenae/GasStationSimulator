#pragma once
#include "CoreMinimal.h"
#include "ETaskResult.h"
#include "TaskStopReason.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FTaskStopReason {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETaskResult StopResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StopReason;
    
    FTaskStopReason();
};

