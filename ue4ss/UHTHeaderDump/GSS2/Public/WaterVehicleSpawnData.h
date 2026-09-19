#pragma once
#include "CoreMinimal.h"
#include "ECategoryFilter.h"
#include "WaterVehicleLoadData.h"
#include "WaterVehicleSpawnData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FWaterVehicleSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> VehicleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECategoryFilter DeliveryCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CustomDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLoadedFromSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterVehicleLoadData LoadData;
    
    GSS2_API FWaterVehicleSpawnData();
};

