#pragma once
#include "CoreMinimal.h"
#include "StageComponent.h"
#include "MinigameStage.generated.h"

USTRUCT(BlueprintType)
struct FMinigameStage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStageComponent> ValidComponentsForStage;
    
    GSS2_API FMinigameStage();
};

