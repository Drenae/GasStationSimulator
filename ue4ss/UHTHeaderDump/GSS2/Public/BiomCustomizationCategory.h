#pragma once
#include "CoreMinimal.h"
#include "BiomCustomizationCategory.generated.h"

class UCustomizationCategory;

USTRUCT(BlueprintType)
struct FBiomCustomizationCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomizationCategory* CustomizationCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GasStationLevelRequiredToUnlock;
    
    GSS2_API FBiomCustomizationCategory();
};

