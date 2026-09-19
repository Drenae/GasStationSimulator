#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "DeliveryBoatToRespawn.h"
#include "EBuildingType.h"
#include "ECategoryFilter.h"
#include "EChunchumanchuAnger.h"
#include "EDecorationCameraType.h"
#include "EGlobalStationEvent.h"
#include "TimeStruct.h"
#include "ChunchumanchuSubsystem.generated.h"

class AActor;
class AScubaEquipmentRentalBuilding;
class ASharkSpawner;
class AShower;
class ASurfingEquipmentRentalBuilding;
class AVolcano;
class AWC;
class AWaterMovementPoint;
class AWaterVehicle;
class AWaterVehicleSpawner;
class UWorld;

UCLASS(Blueprintable)
class GSS2_API UChunchumanchuSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AWaterVehicle*> WaterVehiclesOnMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AWaterVehicle*> CustomersInWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AWaterVehicleSpawner*> WaterVehicleSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> WaterMovementPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASharkSpawner* SharkSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnChunchumanchuIsland;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGiantWaveActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWC* WC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShower* Shower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AScubaEquipmentRentalBuilding* ScubaEquipmentRentalBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASurfingEquipmentRentalBuilding* SurfingEquipmentRentalBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AVolcano> Volcano;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* WeatherManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct LastDeathTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalDeathsNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CoconutCombo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CoconutRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* WorldPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle FuelCustomerTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeliveryBoatToRespawn> DeliveryBoatsToRespawn;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSharkActive;
    
    UChunchumanchuSubsystem();

protected:
    UFUNCTION(BlueprintCallable)
    void TrySpawnFuelCustomer(bool ForceSpawn);
    
    UFUNCTION(BlueprintCallable)
    void SpawnRandomFuelCustomer(AWaterMovementPoint* Target);
    
public:
    UFUNCTION(BlueprintCallable)
    void SpawnDeliveryBoat(TSoftClassPtr<AActor> DeliveryBoatClass, ECategoryFilter DeliveryCategory);
    
    UFUNCTION(BlueprintCallable)
    void SharkDisappeared();
    
    UFUNCTION(BlueprintCallable)
    void SharkComingEvent();
    
    UFUNCTION(BlueprintCallable)
    void SetTotalDeathsNumber(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLastDeathTime(FTimeStruct NewLastDeathTime);
    
    UFUNCTION(BlueprintCallable)
    void SetCoconutRecord(int32 InCoconutRecord);
    
    UFUNCTION(BlueprintCallable)
    void SetCoconutCombo(int32 InCoconutCombo);
    
    UFUNCTION(BlueprintCallable)
    void SendAllCustomersHome(EGlobalStationEvent StationEvent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ScheduleFuelCustomerSpawn();
    
public:
    UFUNCTION(BlueprintCallable)
    void RespawnDeliveryBoats();
    
    UFUNCTION(BlueprintCallable)
    void OnWorldBeginPlay();
    
    UFUNCTION(BlueprintCallable)
    void OnVolcanoAngerChange(EChunchumanchuAnger AngerState, float RenownProgress, float ValueChanged);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDecorationCameraBought(EDecorationCameraType DecorationCameraType);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCloseOpenGasStation(bool IsOpen);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBuildingUpgraded(EBuildingType BuildingType, int32 BuildingLevel, bool bLoadedFromSave);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSharkAttacking();
    
    UFUNCTION(BlueprintCallable)
    void HandleDeliveryBoatDeathWithCargo(TSoftClassPtr<AActor> DeliveryBoatClass, ECategoryFilter DeliveryCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalDeathsNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimeStruct GetLastDeathTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDaysAfterAccident();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCustomersInWaterNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCoconutRecord();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCoconutCombo();
    
    UFUNCTION(BlueprintCallable)
    void DestroyAllBoats();
    
};

