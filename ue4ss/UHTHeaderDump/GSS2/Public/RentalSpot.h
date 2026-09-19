#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "DeathChanceMultipliers.h"
#include "InteractableBuilding.h"
#include "OnEquipmentDurabilityChangedDelegate.h"
#include "RentableEquipmentSlot.h"
#include "TimeStruct.h"
#include "RentalSpot.generated.h"

class ARentalEquipmentShelf;
class AShark;
class AStaticMeshActor;
class AWaterVehicle;
class AWaterVehicleSpawner;
class UMaterialInstance;
class UStaticMesh;
class UTexture2D;

UCLASS(Blueprintable)
class GSS2_API ARentalSpot : public AInteractableBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquipmentDurabilityChanged OnEquipmentDurabilityChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRentableEquipmentSlot Equipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RentalServiceDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRentalDutation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WearOffPerSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PricePerSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWaterVehicleSpawner* RentingCustomerSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* EqMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FullEqMeshSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EmptyEqMeshSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ARentalEquipmentShelf> RentalEquipmentShelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeathChanceMultipliers> DeathChanceMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle UniqueHandle;
    
public:
    ARentalSpot(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartRentalService(int32 RentalDuration, float PricePerSecond, float EqWearOffPerSecond);
    
    UFUNCTION(BlueprintCallable)
    void SetRentalEquipmentShelf(ARentalEquipmentShelf* NewRentalEquipmentShelf);
    
    UFUNCTION(BlueprintCallable)
    void SetEquipment(FRentableEquipmentSlot NewEquipment);
    
    UFUNCTION(BlueprintCallable)
    void SetEqMeshVisibility();
    
    UFUNCTION(BlueprintCallable)
    void SetEqMeshRef(TSoftObjectPtr<UStaticMesh> EqMeshToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetEqMesh(UStaticMesh* NewStaticMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetEqMaterialRef(TSoftObjectPtr<UMaterialInstance> EqMaterialToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetEqMaterial(UMaterialInstance* NewEqMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetEqIcon(UTexture2D* Icon);
    
    UFUNCTION(BlueprintCallable)
    void SetDeathChanceMultipliers(TArray<FDeathChanceMultipliers>& NewValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRentalTimeUpdated(FTimeStruct UpdatedTime);
    
    UFUNCTION(BlueprintCallable)
    void OnCustomerEaten(AShark* Shark, AWaterVehicle* EatenCustomer);
    
    UFUNCTION(BlueprintCallable)
    void OnBoatSpawned(AWaterVehicle* SpawnedVehicle);
    
    UFUNCTION(BlueprintCallable)
    bool IsEquipmentGoingToBreak();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARentalEquipmentShelf* GetRentalEquipmentShelf();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRentableEquipmentSlot GetEquipment();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AStaticMeshActor* GetEqMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetEqIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEqCurrentDurability();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDeathChanceMultipliers> GetDeathChanceMultipliers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeathChanceMultiplier(float CurrentEqDurability);
    
    UFUNCTION(BlueprintCallable)
    void FinishRentalService();
    
    UFUNCTION(BlueprintCallable)
    void FillEquipment();
    
    UFUNCTION(BlueprintCallable)
    void DestroyEquipment();
    
    UFUNCTION(BlueprintCallable)
    void DestroyEqMesh();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateRentingVisuals(bool bIsEqBroken);
    
    UFUNCTION(BlueprintCallable)
    void CreateEqMesh();
    
    UFUNCTION(BlueprintCallable)
    void CheckIfSharkActiveBeforeBreakEq();
    
    UFUNCTION(BlueprintCallable)
    void BreakEquipment(const FString& Reason);
    
    UFUNCTION(BlueprintCallable)
    void ActivateRentingVisuals();
    
};

