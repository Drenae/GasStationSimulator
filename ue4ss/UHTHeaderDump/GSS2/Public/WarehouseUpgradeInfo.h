#pragma once
#include "CoreMinimal.h"
#include "WarehouseUpgradeInfo.generated.h"

USTRUCT(BlueprintType)
struct FWarehouseUpgradeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFuelCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxInventoryCapacity;
    
    GSS2_API FWarehouseUpgradeInfo();
};

