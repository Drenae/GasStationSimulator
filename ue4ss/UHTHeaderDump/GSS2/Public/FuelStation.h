#pragma once
#include "CoreMinimal.h"
#include "EEmployeeTask.h"
#include "EFuelMagazine.h"
#include "InteractableBuilding.h"
#include "FuelStation.generated.h"

class AActor;
class AJerryCan;
class UChildActorComponent;
class UInventoryComponent;

UCLASS(Blueprintable)
class GSS2_API AFuelStation : public AInteractableBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFuelMagazine FuelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEmployeeTask EmployeeTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHoldingSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuccessTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentFuelSpeed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AJerryCan> JerryCanClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* Pistolet;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Airplane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* WaterCustomer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* IncommingWaterCustomer;
    
public:
    AFuelStation(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIncommingWaterFuelUser(AActor* InWaterCustomer);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentWaterFuelUser(AActor* InWaterCustomer);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentAirportFuelUser(AActor* InAirPlane);
    
    UFUNCTION(BlueprintCallable)
    void ResetWaterFuelUser();
    
    UFUNCTION(BlueprintCallable)
    void ResetCurrentAirportUser();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExtraMoney(float ExtraMoney);
    
    UFUNCTION(BlueprintCallable)
    float GetMoneyFromJoe();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetIncommingWaterFuelUser();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCurrentWaterFuelUser();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCurrentAirpotFuelUser();
    
    UFUNCTION(BlueprintCallable)
    float GetAndRemoveFuelFromInventoryInDeltaTime(const float DeltaTime, UInventoryComponent* Inventory, float AdditionalMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void FinishFuelMiniGame(float SpentFuel, float TargetFuel);
    
    UFUNCTION(BlueprintCallable)
    void CalcFuelSpeed(const float DeltaTime);
    
};

