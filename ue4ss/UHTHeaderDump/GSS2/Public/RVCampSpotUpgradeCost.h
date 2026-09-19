#pragma once
#include "CoreMinimal.h"
#include "RVBuildingUpgradeCost.h"
#include "RVCampSpotUpgradeCost.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FRVCampSpotUpgradeCost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRVBuildingUpgradeCost> UpgradeCosts;
    
    FRVCampSpotUpgradeCost();
};

