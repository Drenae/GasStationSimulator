#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "SDMinigameBasedGangActivity.h"
#include "Templates/SubclassOf.h"
#include "SDWarehouseGangActivity.generated.h"

class AGSSWheeledVehicle;

UCLASS(Blueprintable)
class GSS2_API USDWarehouseGangActivity : public USDMinigameBasedGangActivity {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_OrderPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OrderPickupDelayMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OrderPickupDelayMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGSSWheeledVehicle> PickUpVanClass;
    
public:
    USDWarehouseGangActivity();

    UFUNCTION(BlueprintCallable)
    void StartSpawnPickUpVanTimer();
    
    UFUNCTION(BlueprintCallable)
    void OnPickUpVanSpawned();
    
    UFUNCTION(BlueprintCallable)
    void OnPickUpVanLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnDeliveryVanUnloaded();
    
    UFUNCTION(BlueprintCallable)
    void OnDeliveryVanSpawned();
    
    UFUNCTION(BlueprintCallable)
    void ClearSpawnPickUpVanTimer();
    
};

