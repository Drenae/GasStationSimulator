#pragma once
#include "CoreMinimal.h"
#include "MapIndependentBuildingSublevels.h"
#include "ParkingsUpgradeLevels.generated.h"

USTRUCT(BlueprintType)
struct FParkingsUpgradeLevels {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapIndependentBuildingSublevels> SpotUpgradeLevels;
    
    GSS2_API FParkingsUpgradeLevels();
};

