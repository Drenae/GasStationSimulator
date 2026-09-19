#pragma once
#include "CoreMinimal.h"
#include "EItemTypeCategory.h"
#include "IceCreamStruct.generated.h"

class AItem;

USTRUCT(BlueprintType)
struct GSS2_API FIceCreamStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemTypeCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AItem> ItemRef;
    
    FIceCreamStruct();
};

