#pragma once
#include "CoreMinimal.h"
#include "EChunchumanchuAnger.h"
#include "GSSEventTime.h"
#include "InteractableBuilding.h"
#include "OnNoMoreReplacementEqLeftDelegate.h"
#include "OnRentalSpotUnlockedDelegate.h"
#include "OnReplacementEqLeftDelegate.h"
#include "EquipmentRentalBuilding.generated.h"

class AAICharacterBase;
class AInteractableActor;
class ARentalEquipmentContainer;
class ARentalEquipmentShelf;
class ARentalSpot;
class UGSSEvent;
class UMaterialInstance;
class URentalServiceValues;
class UStaticMesh;
class UTexture2D;

UCLASS(Blueprintable)
class GSS2_API AEquipmentRentalBuilding : public AInteractableBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRentalSpotUnlocked OnRentalSpotUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNoMoreReplacementEqLeft OnNoMoreReplacementEqLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReplacementEqLeft OnReplacementEqLeft;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARentalSpot*> UnlockedRentalSpots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ARentalEquipmentContainer> RentalEqContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DeathsNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReplacementTresholdValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ARentalEquipmentShelf> RentalEquipmentShelf;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URentalServiceValues* RentalServiceValues;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGSSEvent> SharkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSSEventTime SharkEventTime;
    
public:
    AEquipmentRentalBuilding(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryToReplaceEquipment_BoxOrInventory(ARentalSpot* RentalSpot, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    bool TryToReplaceEquipment(ARentalSpot* SpotToCheck, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void SetUnlockedRentalSpots(TArray<ARentalSpot*> NewUnlockedRentalSpots);
    
    UFUNCTION(BlueprintCallable)
    void SetReplacementTresholdValue(float NewReplacementTresholdValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDeathsNumber(int32 NewDeathsNumber);
    
    UFUNCTION(BlueprintCallable)
    void RefreshRentalSpots();
    
    UFUNCTION(BlueprintCallable)
    void RefreshBuilding();
    
    UFUNCTION(BlueprintCallable)
    void OnVolcanoAngerChange(EChunchumanchuAnger AngerState, float RenownProgress, float ValueChanged);
    
    UFUNCTION(BlueprintCallable)
    void OnRentalEquipmentBroken(AInteractableActor* Building, ARentalSpot* Spot, AAICharacterBase* Customer);
    
    UFUNCTION(BlueprintCallable)
    void OnEquipmentRentalSpotFree(AInteractableActor* Building, ARentalSpot* Spot);
    
    UFUNCTION(BlueprintCallable)
    void OnEquipmentAddedToQueue(int32 EquipmentRef);
    
    UFUNCTION(BlueprintCallable)
    void OnCloseOpenGasStation(bool IsOpen);
    
    UFUNCTION(BlueprintCallable)
    void LoadSetEqMesh(TSoftObjectPtr<UStaticMesh> EqMeshToLoad, ARentalSpot* SpotToSetEqMesh);
    
    UFUNCTION(BlueprintCallable)
    void LoadSetEqMaterial(TSoftObjectPtr<UMaterialInstance> EqMaterialToLoad, ARentalSpot* SpotToSetEqMesh);
    
    UFUNCTION(BlueprintCallable)
    void LoadSetEqIcon(TSoftObjectPtr<UTexture2D> EqIconToLoad, ARentalSpot* SpotToSetEqIcon);
    
    UFUNCTION(BlueprintCallable)
    bool IsAnyEqAvailable();
    
    UFUNCTION(BlueprintCallable)
    void HandleCustomerService(ARentalSpot* Spot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARentalSpot*> GetUnlockedRentalSpots();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReplacementTresholdValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<ARentalEquipmentContainer> GetRentalEqContainer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDeathsNumber();
    
    UFUNCTION(BlueprintCallable)
    void ForceFinishRentalService();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARentalSpot* FindSpotWithoutEq();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARentalSpot* FindFreeSpot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARentalSpot* FindClosestSpotToCustomer(AAICharacterBase* AssignedCustomer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARentalSpot* FindAssignedSpot(AAICharacterBase* AssignedCustomer);
    
    UFUNCTION(BlueprintCallable)
    void DeleteEquipmentInRentalSpot(ARentalSpot* SpotToRemoveEquipment);
    
    UFUNCTION(BlueprintCallable)
    void CreateNotification(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void AddUnlockedRentalSpot(ARentalSpot* NewRentalSpot);
    
    UFUNCTION(BlueprintCallable)
    void AddEquipmentToRentalSpot(ARentalSpot* RentalSpot);
    
};

