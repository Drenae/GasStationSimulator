#pragma once
#include "CoreMinimal.h"
#include "SaveTutorialManager.generated.h"

USTRUCT(BlueprintType)
struct FSaveTutorialManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HappyAngry_Enabled;
    
    GSS2_API FSaveTutorialManager();
};

