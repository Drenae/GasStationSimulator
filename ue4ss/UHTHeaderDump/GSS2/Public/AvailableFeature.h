#pragma once
#include "CoreMinimal.h"
#include "AvailableFeature.generated.h"

class UFeatureUpgrade;

USTRUCT(BlueprintType)
struct FAvailableFeature {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFeatureUpgrade* FeatureUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAvailable;
    
    GSS2_API FAvailableFeature();
};

