#pragma once
#include "CoreMinimal.h"
#include "ENPTaskFinishReason.h"
#include "ENPTaskResult.h"
#include "NPTaskFinishReason.generated.h"

USTRUCT(BlueprintType)
struct NOPEAISYSTEM_API FNPTaskFinishReason {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPTaskResult TaskResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPTaskFinishReason FinishReason;
    
    FNPTaskFinishReason();
};

