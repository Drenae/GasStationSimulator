#pragma once
#include "CoreMinimal.h"
#include "MemoryMetrics.generated.h"

USTRUCT(BlueprintType)
struct FMemoryMetrics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalMemoryGB;
    
    INGAMEBUGREPORTER_API FMemoryMetrics();
};

