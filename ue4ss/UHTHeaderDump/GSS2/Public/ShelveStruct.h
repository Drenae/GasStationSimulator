#pragma once
#include "CoreMinimal.h"
#include "EItemTypeCategory.h"
#include "ShelveStruct.generated.h"

class UDecorationLevel;

USTRUCT(BlueprintType)
struct GSS2_API FShelveStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemTypeCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDecorationLevel* AssetRef;
    
    FShelveStruct();
};

