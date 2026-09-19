#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "CustomerSpawnInfo.h"
#include "EInteractableTaskType.h"
#include "OnCamperArrivedDelegate.h"
#include "OnCamperLeftDelegate.h"
#include "OnCamperLoadedDelegate.h"
#include "OnCamperSpawnedDelegate.h"
#include "OnCustomNameUpdatedDelegate.h"
#include "RVCampSpot.generated.h"

class AAICharacterBase;
class ARVCampParkingSpot;
class UArrowComponent;
class URVCamperComponent;
class URVCustomerData;

UCLASS(Blueprintable)
class GSS2_API ARVCampSpot : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* CampSpotRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* CampSpotMapLocation;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCamperSpawned OnCamperSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCamperLoaded OnCamperLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCamperArrived OnCamperArrived;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCamperLeft OnCamperLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCustomNameUpdated OnCustomNameUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URVCustomerData*> BookedCustomers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentMaxScheduledGuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnedNpcHome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URVCamperComponent* Camper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ARVCampParkingSpot> CampParkingSpot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomerSpawnInfo> CustomersSpawnQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CustomerSpawnDelayHandle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> SpawningNpcsServiceTagHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SpotCustomName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasCustomName;
    
public:
    ARVCampSpot(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateCustomName(const FString& CustomName);
    
    UFUNCTION(BlueprintCallable)
    void UnlockCampSpot(bool IsSpotUnlocked);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TrySpawnCustomerForServiceFromQueue();
    
public:
    UFUNCTION(BlueprintCallable)
    void TrySpawnCustomerForService(FGameplayTag ServiceTag, EInteractableTaskType MainTask);
    
    UFUNCTION(BlueprintCallable)
    void TrySpawnCustomerForConcert();
    
private:
    UFUNCTION(BlueprintCallable)
    void SpawnCustomerForRecentlyUnlockedService(const FGameplayTag& UnlockedService);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMaxScheduledGuest(int32 NewMax);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDebugBoardVisibility(bool IsVisible);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNpcSpawned(AAICharacterBase* SpawnedNpc);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNextInQueue(URVCustomerData* CustomerData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCamperParked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBooked() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleCamperSpawned(URVCamperComponent* SpawnedCamper);
    
    UFUNCTION(BlueprintCallable)
    void HandleCamperLoaded(URVCamperComponent* LoadedCamper);
    
    UFUNCTION(BlueprintCallable)
    void HandleCamperLeft();
    
    UFUNCTION(BlueprintCallable)
    void HandleCamperArrived();
    
    UFUNCTION(BlueprintCallable)
    TArray<AAICharacterBase*> GetSpawnedCustomerNpcsForService(FGameplayTag ServiceTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCustomName(bool& HasCustomerName, FString& CustomName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URVCustomerData* GetCustomerData() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AAICharacterBase*> GetAllSpawnedCustomerNpcs(bool bIncludeGoingHome);
    
    UFUNCTION(BlueprintCallable)
    URVCustomerData* FindBookedCustomerByID(FGuid CustomerID);
    
};

