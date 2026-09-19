#pragma once
#include "CoreMinimal.h"
#include "RVBuildingUpgradeCost.h"
#include "RVResourceUpgradeCost.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FRVResourceUpgradeCost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRVBuildingUpgradeCost> UpgradeCosts;
    
    FRVResourceUpgradeCost();
};

