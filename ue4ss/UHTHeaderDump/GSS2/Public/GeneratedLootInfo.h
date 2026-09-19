#pragma once
#include "CoreMinimal.h"
#include "EItemIconVisibility.h"
#include "GeneratedItem.h"
#include "GeneratedLootInfo.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FGeneratedLootInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeneratedItem GeneratedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemIconVisibility IconVisibility;
    
    FGeneratedLootInfo();
};

