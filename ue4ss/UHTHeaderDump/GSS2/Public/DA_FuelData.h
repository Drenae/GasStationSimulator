#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EFuelMagazine.h"
#include "VehicleFuelData.h"
#include "DA_FuelData.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class GSS2_API UDA_FuelData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVehicleFuelData> VehiclesFuelData;
    
    UDA_FuelData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinFuelPrice(EFuelMagazine FuelType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxFuelPrice(EFuelMagazine FuelType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultFuelPrice(EFuelMagazine FuelType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCurveFloat* GetBuyFuelPriceCurve(EFuelMagazine FuelType);
    
};

