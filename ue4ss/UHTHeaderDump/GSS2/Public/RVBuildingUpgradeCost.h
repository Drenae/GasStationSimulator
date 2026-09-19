#pragma once
#include "CoreMinimal.h"
#include "RVUpgradeCost.h"
#include "RVBuildingUpgradeCost.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FRVBuildingUpgradeCost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRVUpgradeCost UpgradeCost;
    
    FRVBuildingUpgradeCost();
};

