#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "ChunchumanchuWaterFuelCustomer.generated.h"

class AWaterVehicle;

USTRUCT(BlueprintType)
struct GSS2_API FChunchumanchuWaterFuelCustomer : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AWaterVehicle> WaterVehicle;
    
    FChunchumanchuWaterFuelCustomer();
};

