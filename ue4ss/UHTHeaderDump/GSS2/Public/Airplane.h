#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ECountryOfOrigin.h"
#include "ECurrentStatus.h"
#include "ERunway.h"
#include "ETradingBoosts.h"
#include "ETradingSkill.h"
#include "GeneratedItem.h"
#include "GeneratedLootInfo.h"
#include "Interaction.h"
#include "TimeStruct.h"
#include "Airplane.generated.h"

class AVehiclePart;
class UInventoryComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API AAirplane : public AActor, public IInteraction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECountryOfOrigin CountryOfOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CallSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGeneratedLootInfo> GeneratedItemsForBuy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGeneratedLootInfo> GeneratedItemsForSell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunway Runway;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECurrentStatus CurrentStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* BoughtItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeToTakeOff;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVehiclePart*> VehiclesParts;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPendingTrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGeneratedItem> PickedPlayerItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGeneratedItem> PickedPilotItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalPilotTradeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalPlayerTradeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpatienceMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastPlayerTradeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETradingSkill> SkillsUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCogencyUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExpressionOfGratitudeUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETradingBoosts AffectedByTradingBoost;
    
public:
    AAirplane(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateTimeToTakeOff(FTimeStruct TimeStruct);
    
    UFUNCTION(BlueprintCallable)
    void UpdateGeneratedItemsForSell(FGeneratedLootInfo& Item, bool bIsByTradeAffected);
    
    UFUNCTION(BlueprintCallable)
    void UpdateGeneratedItemsForBuy(FGeneratedLootInfo& Item, bool bIsByTradeAffected);
    
    UFUNCTION(BlueprintCallable)
    void TakeOff();
    
    UFUNCTION(BlueprintCallable)
    void StartCountingDown();
    
    UFUNCTION(BlueprintCallable)
    void SetTotalPlayerTradeValue(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTotalPilotTradeValue(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeToTakeOff(int32 TimeToTakeOffToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetSkillsUsed(TArray<ETradingSkill> NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRunway(ERunway RunwayToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetPickedPlayerItems(TArray<FGeneratedItem> PickedPlayerItemsToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetPickedPilotItems(TArray<FGeneratedItem> PickedPilotItemsToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetLastPlayerTradeValue(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAffectedByTradingBoost(ETradingBoosts NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetImpatienceMeter(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGeneratedItemsForSell(TArray<FGeneratedLootInfo> GeneratedItemsForSellToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetGeneratedItemsForBuy(TArray<FGeneratedLootInfo> GeneratedItemsForBuyToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentStatus(ECurrentStatus CurrentStatusToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetCountryOfOrigin(ECountryOfOrigin CountryOfOriginToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetCanInteract(bool CanInteractToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetCallSign(const FString& NewCallSign);
    
    UFUNCTION(BlueprintCallable)
    void SetBoughtItems(UInventoryComponent* BoughtItemsToSet);
    
    UFUNCTION(BlueprintCallable)
    void ResetAirplane();
    
    UFUNCTION(BlueprintCallable)
    FGeneratedLootInfo RandomGraditudeItem();
    
    UFUNCTION(BlueprintCallable)
    void OnAirportSandstormStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalPlayerTradeValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalPilotTradeValue();
    
    UFUNCTION(BlueprintCallable)
    int32 GetTimeToTakeOff();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ETradingSkill> GetSkillsUsed();
    
    UFUNCTION(BlueprintCallable)
    ERunway GetRunway();
    
    UFUNCTION(BlueprintCallable)
    TArray<FGeneratedItem> GetPickedPlayerItems();
    
    UFUNCTION(BlueprintCallable)
    TArray<FGeneratedItem> GetPickedPilotItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastPlayerTradeValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETradingBoosts GetIsAffectedByTradingBoost();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetImpatienceMeter();
    
    UFUNCTION(BlueprintCallable)
    TArray<FGeneratedLootInfo> GetGeneratedItemsForSell();
    
    UFUNCTION(BlueprintCallable)
    TArray<FGeneratedLootInfo> GetGeneratedItemsForBuy();
    
    UFUNCTION(BlueprintCallable)
    ECurrentStatus GetCurrentStatus();
    
    UFUNCTION(BlueprintCallable)
    ECountryOfOrigin GetCountryOfOrigin();
    
    UFUNCTION(BlueprintCallable)
    bool GetCanInteract();
    
    UFUNCTION(BlueprintCallable)
    FString GetCallSign();
    
    UFUNCTION(BlueprintCallable)
    UInventoryComponent* GetBoughtItems();
    
    UFUNCTION(BlueprintCallable)
    void AddUsedSkill(ETradingSkill NewValue);
    

    // Fix for true pure virtual functions not being implemented
};

