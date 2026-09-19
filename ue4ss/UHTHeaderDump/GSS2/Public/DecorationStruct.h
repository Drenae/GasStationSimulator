#pragma once
#include "CoreMinimal.h"
#include "DecorationStruct.generated.h"

class AItem;

USTRUCT(BlueprintType)
struct GSS2_API FDecorationStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AItem> ItemSoftClass;
    
    FDecorationStruct();
};

