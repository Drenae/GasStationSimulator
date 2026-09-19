#pragma once
#include "CoreMinimal.h"
#include "ECategoryFilter.h"
#include "EItemTypeCategory.h"
#include "TarrayStruct.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FTarrayStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECategoryFilter MainCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemTypeCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    FTarrayStruct();
};

