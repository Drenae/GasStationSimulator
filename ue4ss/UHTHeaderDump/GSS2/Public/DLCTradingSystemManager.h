#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ChanceTier.h"
#include "EDLCName.h"
#include "EInventoryType.h"
#include "ETradingSkill.h"
#include "GeneratedItem.h"
#include "GraditudeItemGotDelegate.h"
#include "PilotItemsDiscount.h"
#include "SkillCooldownUpdatedDelegate.h"
#include "SkillReadyToUseDelegate.h"
#include "SkillUsedDelegate.h"
#include "SuccessfulTradesLevel.h"
#include "TimeStruct.h"
#include "TradeAcceptedDelegate.h"
#include "TradeItemsReceivedDelegate.h"
#include "TradingBoost.h"
#include "TradingSkill.h"
#include "UnlockedSkill.h"
#include "DLCTradingSystemManager.generated.h"

class AItem;
class ATradingAirplane;

UCLASS(Blueprintable)
class GSS2_API ADLCTradingSystemManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkillUsed OnSkillUsed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkillReadyToUse OnSkillReadyToUse;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkillCooldownUpdated OnSkillCooldownUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTradeAccepted OnTradeAccepted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTradeItemsReceived OnTradeItemsReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGraditudeItemGot OnGraditudeItemGot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATradingAirplane* CurrentAirplane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATradingAirplane*> SpawnedAirplanes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChanceTier> ChanceTiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSuccessfulTradesLevel> SuccessfulTradesLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPilotItemsDiscount> PilotItemsQuantityTradeValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSuccessfulTradesNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSuccessfulTradesLevel CurrentSuccessfulTradesLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTradingSkill> TradingSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnlockedSkill> UnlockedSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnlockedSkill> UsedSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTradingBoost> TradingBoosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTradingBoost> UnavailableBoosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTradingBoost ActiveBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTutorialItemsAdded;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndexOfSameDeniedOffer;
    
    ADLCTradingSystemManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UseSkill(ETradingSkill SkillToUse, bool bDebug);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePickedProductAmount(FGeneratedItem Item, int32 NewValue, bool bPlayerItem, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    float UpdateImpatienceMeter(float& AddedImpatience);
    
    UFUNCTION(BlueprintCallable)
    float UpdateChanceValue();
    
    UFUNCTION(BlueprintCallable)
    bool UnlockSkill(ETradingSkill SkillToUnlock, bool bDebug);
    
    UFUNCTION(BlueprintCallable)
    bool TryToTrade(float& AddedImpatience, EInventoryType InventoryType);
    
    UFUNCTION(BlueprintCallable)
    void SetUsedSkills(TArray<FUnlockedSkill> SkillsToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetUnlockedTradingSkills(TArray<FUnlockedSkill> SkillsToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetUnavailableBoosts(TArray<FTradingBoost> UnavailableBoostsToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnedAirplanes(TArray<ATradingAirplane*> SpawnedAirplanesToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaneIfBoostActive(ATradingAirplane* AirplaneToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTutorialItemsAdded(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSuccessfulTradesNumber(int32 CurrentSuccessfulTradesNumberToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSuccessfulTradesLevel(FSuccessfulTradesLevel CurrentSuccessfulTradesLevelToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentAirplane(ATradingAirplane* Airplane);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveBoost(FTradingBoost BoostToSet);
    
    UFUNCTION(BlueprintCallable)
    void ResetSkillCooldown(FUnlockedSkill& SkillToReset);
    
    UFUNCTION(BlueprintCallable)
    void ResetAfterAirplaneTookOff(ATradingAirplane* Airplane);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromPickedTable(FGeneratedItem Item, bool bPlayerItem);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDLCActivationStateChanged(EDLCName DLCName, bool bActivated);
    
public:
    UFUNCTION(BlueprintCallable)
    void LevelUpCurrentSuccessfulTradesLevel();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerHasEnoughProduct(TSoftClassPtr<AItem> ItemToCheck, int32 NumberOfItemsNeeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FUnlockedSkill> GetUsedSkills();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FUnlockedSkill> GetUnlockedTradingSkills();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUnlockedSkill(ETradingSkill SkillToGet, FUnlockedSkill& FoundSkill);
    
    UFUNCTION(BlueprintCallable)
    TArray<FTradingBoost> GetUnavailableBoosts();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSuccessfulTradesLevel> GetSuccessfulTradesLevels();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ATradingAirplane*> GetSpawnedAirplanes();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsTutorialItemsAdded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSuccessfulTradesNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSuccessfulTradesLevel GetCurrentSuccessfulTradesLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATradingAirplane* GetCurrentAirplane();
    
    UFUNCTION(BlueprintCallable)
    FTradingBoost GetActiveBoost();
    
    UFUNCTION(BlueprintCallable)
    void CooldownsTimer(FTimeStruct TimeStruct);
    
    UFUNCTION(BlueprintCallable)
    FText CheckTierLevel(float ChanceValue);
    
    UFUNCTION(BlueprintCallable)
    bool CheckIfTheSameItemsOfDeniedOffers();
    
    UFUNCTION(BlueprintCallable)
    bool CheckIfSkillUsed(ETradingSkill SkillToCheck);
    
    UFUNCTION(BlueprintCallable)
    bool CheckIfSkillUnlocked(ETradingSkill SkillToCheck);
    
    UFUNCTION(BlueprintCallable)
    void CheckIfSkillUnlockAvailable();
    
    UFUNCTION(BlueprintCallable)
    bool CheckIfNewSuccessfulTradesLevelAvailable();
    
    UFUNCTION(BlueprintCallable)
    bool CheckIfCanTrade();
    
    UFUNCTION(BlueprintCallable)
    void CheckIfAllItemsLoaded(EInventoryType InventoryType, bool TutorialTrade);
    
    UFUNCTION(BlueprintCallable)
    void CancelBoost();
    
    UFUNCTION(BlueprintCallable)
    void AddTutorialItems();
    
    UFUNCTION(BlueprintCallable)
    void AddSpawnedAirplane(ATradingAirplane* SpawnedAirplaneToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddNewDeniedOffer();
    
    UFUNCTION(BlueprintCallable)
    void ActivateBoost();
    
    UFUNCTION(BlueprintCallable)
    void AcceptTrade(EInventoryType InventoryType, bool TutorialTrade);
    
};

