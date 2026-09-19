#pragma once
#include "CoreMinimal.h"
#include "BasketItemStruct.h"
#include "OrderPreset.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FOrderPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBasketItemStruct> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PresetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    FOrderPreset();
};

