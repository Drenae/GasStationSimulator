#pragma once
#include "CoreMinimal.h"
#include "WindsurfingBoardColors.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FWindsurfingBoardColors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> Board;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> Sail;
    
    GSS2_API FWindsurfingBoardColors();
};

