#pragma once
#include "CoreMinimal.h"
#include "EItemTypeCategory.h"
#include "FilterStruct.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct GSS2_API FFilterStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemTypeCategory FilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RequiredMaps;
    
    FFilterStruct();
};

