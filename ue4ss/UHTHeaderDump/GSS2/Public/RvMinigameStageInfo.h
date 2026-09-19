#pragma once
#include "CoreMinimal.h"
#include "ERVMinigameStage.h"
#include "RvMinigameStageInfo.generated.h"

USTRUCT(BlueprintType)
struct FRvMinigameStageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERVMinigameStage Stage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompletionPercent;
    
    GSS2_API FRvMinigameStageInfo();
};

