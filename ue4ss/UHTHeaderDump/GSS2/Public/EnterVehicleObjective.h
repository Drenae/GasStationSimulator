#pragma once
#include "CoreMinimal.h"
#include "ObjectiveBase.h"
#include "EnterVehicleObjective.generated.h"

class AGSSPlayerCharacter;
class APlayerVehicle;

UCLASS(Blueprintable)
class GSS2_API UEnterVehicleObjective : public UObjectiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSpecificVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<APlayerVehicle> VehicleInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APlayerVehicle> VehicleClass;
    
    UEnterVehicleObjective();

    UFUNCTION(BlueprintCallable)
    void OnPlayerEnterVehicle(AGSSPlayerCharacter* PlayerCharacter, APlayerVehicle* PlayerVehicle);
    
};

