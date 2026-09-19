#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "WaterVehicleSpawnData.h"
#include "WaterVehicleSpawner.generated.h"

class AWaterVehicle;
class UArrowComponent;

UCLASS(Blueprintable)
class GSS2_API AWaterVehicleSpawner : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AWaterVehicle> VehicleClassToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWaterVehicle* SpawnedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TargetPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Home;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HomeTargetPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSpawnMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDeSpawnMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SingleMoveTo;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* VariableTarget;
    
    AWaterVehicleSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnWaterVehicleSoft(const TSoftClassPtr<AWaterVehicle>& WatervehicleClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnWaterVehicle(FWaterVehicleSpawnData SpawnData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnDefaultWaterVehicle();
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnedActor(AWaterVehicle* NewSpawnedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AWaterVehicle* GetSpawnedActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetHomeTargetPoints();
    
};

