#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ERVResource.h"
#include "RVBuildingUpgradeCost.h"
#include "RVCampSpotUpgradeCost.h"
#include "RVCousingHouseUpgradeRequirement.h"
#include "RVResourceUpgradeCost.h"
#include "RVUpgradeCost.h"
#include "RVUpgradeCostsSettings.generated.h"

class UDataTable;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class GSS2_API URVUpgradeCostsSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GuestServicesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRVCampSpotUpgradeCost> ParkingSpotCostsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRVBuildingUpgradeCost> ConcertBuildingCostsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRVBuildingUpgradeCost> CousinHouseCostsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRVCousingHouseUpgradeRequirement> CousinHouseExtraRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRVBuildingUpgradeCost> BookingCostsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERVResource, FRVResourceUpgradeCost> ResourceUpgradeCostsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, TSoftObjectPtr<UTexture2D>> CampSpotsUpgradeThumbnails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<UTexture2D>> ServiceUpgradeThumbnails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERVResource, TSoftObjectPtr<UTexture2D>> ResourceUpgradeThumbnails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> CousinHouseUpgradeThumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> RubyOfficeUpgradeThumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ConcertUpgradeThumbnail;
    
    URVUpgradeCostsSettings();

    UFUNCTION(BlueprintCallable)
    int32 GetServiceNumForCousinUpgrade(int32 CousinHouseLevel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool GetRVServiceCost(UObject* WorldContextObject, FGameplayTag ServiceTag, FRVUpgradeCost& BuildingCost);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool GetRVResourceUpgradeCost(UObject* WorldContextObject, ERVResource Resource, FRVUpgradeCost& BuildingCost);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool GetRVParkingUpgradeCost(UObject* WorldContextObject, int32 ParkingSpotNumber, FRVUpgradeCost& BuildingCost);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool GetRVCousinUpgradeCost(UObject* WorldContextObject, FRVUpgradeCost& BuildingCost);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool GetRVConcertUpgradeCost(UObject* WorldContextObject, FRVUpgradeCost& BuildingCost);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool GetBookingUpgradeCost(UObject* WorldContextObject, FRVUpgradeCost& BuildingCost);
    
};

