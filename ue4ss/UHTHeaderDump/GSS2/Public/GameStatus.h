#pragma once
#include "CoreMinimal.h"
#include "GameStatus.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FGameStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CleanLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HappyAngryCount;
    
    FGameStatus();
};

