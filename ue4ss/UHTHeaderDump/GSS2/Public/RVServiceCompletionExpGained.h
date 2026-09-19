#pragma once
#include "CoreMinimal.h"
#include "RVServiceCompletionExpGained.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FRVServiceCompletionExpGained {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpGained;
    
    FRVServiceCompletionExpGained();
};

