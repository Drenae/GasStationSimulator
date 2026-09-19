#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "DetailedServiceQueueData.h"
#include "EGuestServiceDifficulty.h"
#include "ERVResource.h"
#include "InteractableActor.h"
#include "MapIndependentBuildingSublevels.h"
#include "OnBookingUpgradedDelegate.h"
#include "OnConcertBuildingUpgradedDelegate.h"
#include "OnCousinHouseUpgradedDelegate.h"
#include "OnNewServiceUnlockedDelegate.h"
#include "OnParkingUpgradedDelegate.h"
#include "OnResourceUpgradedDelegate.h"
#include "OnUpgradeMarkerClickedDelegate.h"
#include "RVMinigamesDifficultyUnlockThresholds.h"
#include "RVServiceData.h"
#include "RVUpgradeCost.h"
#include "RVUpgradeInputData.h"
#include "RVServiceUpgrader.generated.h"

class ARVCampManager;
class UEventDisplay;
class URVUpgradeCostsSettings;
class URV_MapAndEventsUpgradeData;

UCLASS(Blueprintable)
class GSS2_API ARVServiceUpgrader : public AInteractableActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URVUpgradeCostsSettings* UpgradeCosts;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewServiceUnlocked OnNewServiceUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewServiceUnlocked OnNewServiceLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnParkingUpgraded OnParkingUpgraded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConcertBuildingUpgraded OnConcertBuildingUpgraded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCousinHouseUpgraded OnCousinHouseUpgraded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResourceUpgraded OnResourceUpgraded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBookingUpgraded OnBookingUpgraded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpgradeMarkerClicked OnUpgradeMarkerClicked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URV_MapAndEventsUpgradeData* MapsAndEventsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag QuestUnlockedTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARVCampManager* CampManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RVBuildingMapsToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RVBuildingMapsToUnload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RVLoadingUUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RVUnloadingUUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> CurrentlyLoadedRVServices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRVServiceData> ServicesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRVMinigamesDifficultyUnlockThresholds UnlockThresholds;
    
public:
    ARVServiceUpgrader(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnlockFullParking();
    
    UFUNCTION(BlueprintCallable)
    void UnlockAllServices();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UnloadRVBuildingMaps();
    
public:
    UFUNCTION(BlueprintCallable)
    bool TryUpgradeRVResource(ERVResource Resource);
    
    UFUNCTION(BlueprintCallable)
    bool TryUpgradeRVParking(int32 SpotNumber);
    
    UFUNCTION(BlueprintCallable)
    bool TryUpgradeRVCousinHouse();
    
    UFUNCTION(BlueprintCallable)
    bool TryUpgradeRVConcert();
    
    UFUNCTION(BlueprintCallable)
    bool TryUpgradeBooking();
    
    UFUNCTION(BlueprintCallable)
    bool TryUnlockRVService(FGameplayTag UnlockedMinigameTag);
    
    UFUNCTION(BlueprintCallable)
    bool PayUpgradeCost(const FRVUpgradeCost& CostToPay);
    
    UFUNCTION(BlueprintCallable)
    void OnServiceFinished(const FGameplayTag& ServiceTag, EGuestServiceDifficulty DifficultySelected, bool WasSuccess);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBuildingUpgraded(TSoftClassPtr<UEventDisplay> EventDisplayToLoad);
    
public:
    UFUNCTION(BlueprintCallable)
    void LockService(const FGameplayTag& ServiceTag, bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    void LoadRVServices(const TArray<FRVServiceData>& ServicesToLoad);
    
protected:
    UFUNCTION(BlueprintCallable)
    void LoadRVBuildingMaps();
    
    UFUNCTION(BlueprintCallable)
    void LoadMapAndEventData(const FMapIndependentBuildingSublevels& MapBuildingSublevelsPtr);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsServiceUnlocked(const FGameplayTag& CheckedTag);
    
    UFUNCTION(BlueprintCallable)
    bool IsServiceLockedFromQuest(const FGameplayTag& CheckedTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBuildingLockedByQuest(FRVUpgradeInputData InputData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBuildingFullyUpgraded(FRVUpgradeInputData InputData);
    
    UFUNCTION(BlueprintCallable)
    void InitServiceUpgrader();
    
    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> GetUnlockedServices();
    
    UFUNCTION(BlueprintCallable)
    int32 GetServiceWinStreak(const FGameplayTag& ServiceTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EGuestServiceDifficulty> GetServiceUnlockedDifficulties(const FGameplayTag& GuestServiceTag);
    
    UFUNCTION(BlueprintCallable)
    TArray<FDetailedServiceQueueData> GetServiceQueueData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfUnlockedServices();
    
    UFUNCTION(BlueprintCallable)
    int32 GetExperienceThreshold(const FGameplayTag& ServiceTag);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAmountOfServiceCompletedPerDifficulty(const FGameplayTag& ServiceTag, EGuestServiceDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAmountOfServiceCompleted(const FGameplayTag& ServiceTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CanUpgradeRVResource(ERVResource Resource, bool& bCanBeUpgraded, bool& bCanPay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CanUpgradeRVParking(int32 ParkingSpotNumber, bool& bCanBeUpgraded, bool& bCanPay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CanUpgradeRVCousinHouse(bool& bCanBeUpgraded, bool& bCanPay, bool& bEnoughServices);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CanUpgradeRVConcert(bool& bCanBeUpgraded, bool& bCanPay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CanUpgradeRVBooking(bool& bCanBeUpgraded, bool& bCanPay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CanUnlockRVService(FGameplayTag UnlockedMinigameTag, bool& IsUnLocked, bool& bCanPay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool bCanPayCost(const FRVUpgradeCost& CostToPay, bool ShowErrorMessage);
    
    UFUNCTION(BlueprintCallable)
    void AddServiceWinStreak(const FGameplayTag& ServiceTag);
    
};

