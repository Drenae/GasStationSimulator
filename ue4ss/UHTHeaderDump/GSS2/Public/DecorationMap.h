#pragma once
#include "CoreMinimal.h"
#include "DecorationMap.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FDecorationMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FDecorationMap();
};

