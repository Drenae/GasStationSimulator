#pragma once
#include "CoreMinimal.h"
#include "RVCousingHouseUpgradeRequirement.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FRVCousingHouseUpgradeRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlockedServicesCount;
    
    FRVCousingHouseUpgradeRequirement();
};

