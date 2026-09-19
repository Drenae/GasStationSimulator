#pragma once
#include "CoreMinimal.h"
#include "FameDecorationStruct.generated.h"

class AItem;

USTRUCT(BlueprintType)
struct GSS2_API FFameDecorationStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AItem> ItemSoftClass;
    
    FFameDecorationStruct();
};

