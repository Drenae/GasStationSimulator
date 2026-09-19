#pragma once
#include "CoreMinimal.h"
#include "UnlockableByFameData.h"
#include "FameLevelData.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FFameLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExperienceRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnlockableByFameData> Rewards;
    
    FFameLevelData();
};

