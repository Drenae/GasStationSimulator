#pragma once
#include "CoreMinimal.h"
#include "AchievementValue.generated.h"

USTRUCT(BlueprintType)
struct FAchievementValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Achievement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bObtained;
    
    GSS2_API FAchievementValue();
};

