#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "CargoRevealPercentage.h"
#include "ECountryOfOrigin.h"
#include "ECountryRegion.h"
#include "EDLCName.h"
#include "ERunway.h"
#include "GeneratedLootInfo.h"
#include "ItemRange.h"
#include "PlaneEntry.h"
#include "SavedAirplane.h"
#include "TimeStruct.h"
#include "TradingPlanesInfo.h"
#include "UnlockableGameplayStuffState.h"
#include "AirportScheduleManager.generated.h"

class AItem;
class ARunway;
class ATradingAirplane;
class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API UAirportScheduleManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DT_TradingAirplanesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DT_DefaultPilotRegulars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DT_PlayerRegulars;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ARunway>> Runways;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ARunway>> OwnedRunways;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SecondRunwayUnlockCountries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DefaultCountries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LatinAmericaCountries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EuropeanCountries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OutOfTheBoxCountries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedAirplane> AirplanesReadyToLand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemRange BuildingBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpecialItemChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalStackChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GasStationRegularsStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OtherPlaneExclusiveChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultTimeToTakeOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfEntriesPerRunway;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ATradingAirplane> AirplaneForAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfCallSignNumbers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DenyCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentDenyCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> RevealCargoStages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RevealCargoNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaneLifeCycleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTimeToArrive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDecrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinCancelFlightTimeMinutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCancelFlightTimeMinutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentCancelFlightTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChancesOfFlightCanceling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlaneEntry> ExcludedPlanes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAS_Quest25Passed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAS_Quest29Passed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StartPlaneArivalCountdownTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag IsFirstTradeTag;
    
public:
    UAirportScheduleManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TimeToArriveCounter(FTimeStruct TimeStruct);
    
    UFUNCTION(BlueprintCallable)
    void StartCounterIfPossible();
    
    UFUNCTION(BlueprintCallable)
    void SortPlanes(int32 RunwayIndex);
    
    UFUNCTION(BlueprintCallable)
    void SortCountryToProperRegion(const FName& CountryOrigin, const FTradingPlanesInfo& PlaneInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ShowRunwayCargoItems(ARunway* Runway);
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowCargoItems();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ShowCargoItem(ARunway* Runway, int32 PlaneIndex, int32& ItemIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTimeToTakeOff(int32 TimeToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnPilot(ATradingAirplane* Plane);
    
    UFUNCTION(BlueprintCallable)
    void SetRevealCargoNumber(int32 RevealCargoNumberToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaneData(ATradingAirplane* Plane, FSavedAirplane& SavedAirplane);
    
    UFUNCTION(BlueprintCallable)
    void SetPlane(ATradingAirplane* Plane, ERunway Runway, bool bLoadedFromSave);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnedRunways(TArray<TSoftObjectPtr<ARunway>> OwnedRunwaysToSet);
    
    UFUNCTION(BlueprintCallable)
    int32 SetItemToBuyActualAmount(ERunway Runway, ECountryOfOrigin Country, TSoftClassPtr<AItem> Item, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAS_Quest29Passed(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAS_Quest25Passed(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetExcludedPlanes(TArray<FPlaneEntry> ExcludedPlanesToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetDenyCooldown(int32 DenyCooldownToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentDenyCooldown(int32 DenyCooldownToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentCancelFlightTime(int32 TimeToSet);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCancelFlightEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAirplanesReadyToLand(TArray<FSavedAirplane> AirplanesReadyToLandToSet);
    
    UFUNCTION(BlueprintCallable)
    void ResetCurrentDenyCooldown();
    
    UFUNCTION(BlueprintCallable)
    void RandomPlayerRandoms(TArray<FGeneratedLootInfo>& GeneratedSellLootInfo, TArray<FName>& GeneratedPilotRegulars, TArray<FSoftObjectPath>& ItemsToLoad);
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 RandomPlaneToCancel(int32 RunwayIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void RandomPlaneRandoms(FName CountryOrigin, ECountryRegion CountryRegion, TArray<FGeneratedLootInfo>& GeneratedBuyLootInfo, TArray<FGeneratedLootInfo>& GeneratedSellLootInfo, TArray<FSoftObjectPath>& ItemsToLoad);
    
    UFUNCTION(BlueprintCallable)
    void RandomPlaneExclusives(TArray<FItemRange>& PlaneExclusives, TArray<FGeneratedLootInfo>& GeneratedExclusives, TArray<FSoftObjectPath>& ItemsToLoad);
    
    UFUNCTION(BlueprintCallable)
    void RandomPilotRandoms(FName CountryOrigin, ECountryRegion CountryRegion, TArray<FGeneratedLootInfo>& GeneratedBuyLootInfo, TArray<FName>& GeneratedPilotRegulars, TArray<FSoftObjectPath>& ItemsToLoad);
    
    UFUNCTION(BlueprintCallable)
    FGeneratedLootInfo RandomCountrySpecific(const FTradingPlanesInfo& Info, TArray<FSoftObjectPath>& ItemsToLoad);
    
    UFUNCTION(BlueprintCallable)
    FString RandomCallSign(ECountryOfOrigin CountryOfOrigin, const FString& CountryShortCut);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerDenyPlane(int32 RunwayIndex, int32 PlaneIndex, bool bLandedPlane);
    
    UFUNCTION(BlueprintCallable)
    void OnNewGameplayStuffUnlockStateChanged(FUnlockableGameplayStuffState NewUnlockableGameplayStuffState);
    
    UFUNCTION(BlueprintCallable)
    void OnGameLoaded(bool bIsLoaded);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDLCActivationStateChanged(EDLCName DLCName, bool bActivated);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAirportSandstormStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnAirportSandstormFinished();
    
    UFUNCTION(BlueprintCallable)
    int32 GetTimeToTakeOff();
    
    UFUNCTION(BlueprintCallable)
    TArray<TSoftObjectPtr<ARunway>> GetRunways();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<ARunway> GetRunway(ERunway Runway);
    
    UFUNCTION(BlueprintCallable)
    int32 GetRevealCargoNumber();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlaneLifeCycleTime();
    
    UFUNCTION(BlueprintCallable)
    TArray<TSoftObjectPtr<ARunway>> GetOwnedRunways();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumberOfEntriesPerRunway();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsAS_Quest29Passed();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsAS_Quest25Passed();
    
    UFUNCTION(BlueprintCallable)
    TArray<FPlaneEntry> GetExcludedPlanes();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDenyCooldown();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentDenyCooldown();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentCancelFlightTime();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetAvailableCountries();
    
    UFUNCTION(BlueprintCallable)
    TArray<FSavedAirplane> GetAirplanesReadyToLand();
    
    UFUNCTION(BlueprintCallable)
    bool DenyPlane(int32 RunwayIndex, int32 PlaneIndex, bool bLandedPlane);
    
    UFUNCTION(BlueprintCallable)
    void CreateQuestEntries(ERunway RunwayToSet, TArray<ECountryOfOrigin> Countries);
    
    UFUNCTION(BlueprintCallable)
    FPlaneEntry CreatePlaneEntry(FName CountryOrigin, int32 RunwayIndexToSet, TArray<FSoftObjectPath>& ItemsToLoad, bool bShuffleGeneratedItems);
    
    UFUNCTION(BlueprintCallable)
    FPlaneEntry CreatePlaneEntries(int32 RunwayIndexToSet, int32 NumberOfEntriesToCreate);
    
    UFUNCTION(BlueprintCallable)
    void ContinueShowCargoItem(ARunway* Runway, int32 PlaneIndex, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void CheckRevealCargoStage(FPlaneEntry& PlaneEntry);
    
    UFUNCTION(BlueprintCallable)
    void CheckIfNewRunwayAvailable();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CancelFlightEvent();
    
    UFUNCTION(BlueprintCallable)
    bool CalculateRevealBar(FCargoRevealPercentage& CargoRevealPercentage, int32 TimeToArrive);
    
public:
    UFUNCTION(BlueprintCallable)
    void AllItemsNeededLoaded(int32 NumberOfEntriesCreated, int32 RunwayIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddTimeToAirplanes(int32 Runway, float TimeToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddOwnedRunway(TSoftObjectPtr<ARunway> OwnedRunwayToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddLine(ARunway* Runaway);
    
};

