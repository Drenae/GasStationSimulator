#pragma once
#include "CoreMinimal.h"
#include "ERefuelObjectiveType.h"
#include "ObjectiveBase.h"
#include "ReachFuelCapacityObjective.generated.h"

class AGSSWheeledVehicle;

UCLASS(Blueprintable)
class GSS2_API UReachFuelCapacityObjective : public UObjectiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInGasStation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AirStripFuel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AGSSWheeledVehicle> VehicleInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredFuelCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERefuelObjectiveType FuelObjectiveType;
    
    UReachFuelCapacityObjective();

protected:
    UFUNCTION(BlueprintCallable)
    void OnFuelLevelReached(AGSSWheeledVehicle* PlayerVehicle, float CurrentFuel, bool bGasStation);
    
};

