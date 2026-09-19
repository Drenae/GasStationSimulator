#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionResponse -FallbackName=ECollisionResponse
#include "AirplaneBase.h"
#include "AirplaneStatusChangedDelegate.h"
#include "DeniedTradeOffer.h"
#include "ECountryOfOrigin.h"
#include "ECurrentStatus.h"
#include "EMontagePilotState.h"
#include "ENPCGender.h"
#include "ERunway.h"
#include "ETradingBoosts.h"
#include "ETradingSkill.h"
#include "GeneratedItem.h"
#include "GeneratedLootInfo.h"
#include "Interaction.h"
#include "OnTakeOffDelegate.h"
#include "TimeStruct.h"
#include "TimeToTakeOffUpdatedDelegate.h"
#include "TradingAirplane.generated.h"

class APilotCharacter;
class UInventoryComponent;
class UMaterialInstance;
class USkeletalMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API ATradingAirplane : public AAirplaneBase, public IInteraction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTakeOff OnTakeOff;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirplaneStatusChanged OnAirplaneStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeToTakeOffUpdated OnTimeToTakeOffUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StablilzerLeftMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StablilzerRightMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CountryFlagMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APilotCharacter* Pilot;
    
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
    int32 TotalPickedPilotItemsAmount;
    
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
    float LastPilotTradeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeniedTradeOffer> DeniedTradeOffers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSameOffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETradingSkill> SkillsUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCogencyUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExpressionOfGratitudeUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETradingBoosts AffectedByTradingBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TradeTryTut;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DMI_1_Tint_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DMI_1_Tint_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DMI_1_Tint_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DMI_2_Tint_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DMI_2_Tint_2;
    
    ATradingAirplane(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateTimeToTakeOff(FTimeStruct TimeStruct);
    
    UFUNCTION(BlueprintCallable)
    void UpdateGeneratedItemsForSell(FGeneratedLootInfo& Item, bool bIsByTradeAffected);
    
    UFUNCTION(BlueprintCallable)
    void UpdateGeneratedItemsForBuy(FGeneratedLootInfo& Item, bool bIsByTradeAffected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateColors();
    
    UFUNCTION(BlueprintCallable)
    void TakeOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartTrading();
    
    UFUNCTION(BlueprintCallable)
    void StartPilotMounting();
    
    UFUNCTION(BlueprintCallable)
    void StartCountingDown();
    
    UFUNCTION(BlueprintCallable)
    void SpawnPilot(ENPCGender PilotGender);
    
    UFUNCTION(BlueprintCallable)
    void SetTradeTryTut(int32 NewValue);
    
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
    void SetPlaneArrived(bool bLoadedFromSave);
    
    UFUNCTION(BlueprintCallable)
    void SetPilot(APilotCharacter* NewPilot);
    
    UFUNCTION(BlueprintCallable)
    void SetPickedPlayerItems(TArray<FGeneratedItem> PickedPlayerItemsToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetPickedPilotItems(TArray<FGeneratedItem> PickedPilotItemsToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshesCollisions(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse);
    
    UFUNCTION(BlueprintCallable)
    void SetLastPlayerTradeValue(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLastPilotTradeValue(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSameOffer(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAffectedByTradingBoost(ETradingBoosts NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetImpatienceMeter(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGeneratedItemsForSell(TArray<FGeneratedLootInfo> GeneratedItemsForSellToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetGeneratedItemsForBuy(TArray<FGeneratedLootInfo> GeneratedItemsForBuyToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetDeniedTradeOffers(TArray<FDeniedTradeOffer> NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentStatus(ECurrentStatus CurrentStatusToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetCountryOfOrigin(ECountryOfOrigin CountryOfOriginToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetCountryFlagMaterial(TSoftObjectPtr<UMaterialInstance> FlagMaterial);
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RandomColors();
    
    UFUNCTION(BlueprintCallable)
    void PilotUnMounted();
    
    UFUNCTION(BlueprintCallable)
    void OnAirportSandstormStarted();
    
    UFUNCTION(BlueprintCallable)
    void LoadPilot(TSoftClassPtr<APilotCharacter> RandomCharacter, TSoftObjectPtr<USkeletalMesh> RandomHair, TSoftObjectPtr<USkeletalMesh> RandomBeard, ENPCGender PilotGender, EMontagePilotState NewValue);
    
    UFUNCTION(BlueprintCallable)
    int32 GetTradeTryTut();
    
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
    APilotCharacter* GetPilot();
    
    UFUNCTION(BlueprintCallable)
    TArray<FGeneratedItem> GetPickedPlayerItems();
    
    UFUNCTION(BlueprintCallable)
    TArray<FGeneratedItem> GetPickedPilotItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastPlayerTradeValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastPilotTradeValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSameOffer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETradingBoosts GetIsAffectedByTradingBoost();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetImpatienceMeter();
    
    UFUNCTION(BlueprintCallable)
    TArray<FGeneratedLootInfo> GetGeneratedItemsForSell();
    
    UFUNCTION(BlueprintCallable)
    TArray<FGeneratedLootInfo> GetGeneratedItemsForBuy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDeniedTradeOffer> GetDeniedTradeOffers();
    
    UFUNCTION(BlueprintCallable)
    ECurrentStatus GetCurrentStatus();
    
    UFUNCTION(BlueprintCallable)
    ECountryOfOrigin GetCountryOfOrigin();
    
    UFUNCTION(BlueprintCallable)
    UStaticMeshComponent* GetCountryFlagMesh();
    
    UFUNCTION(BlueprintCallable)
    bool GetCanInteract();
    
    UFUNCTION(BlueprintCallable)
    FString GetCallSign();
    
    UFUNCTION(BlueprintCallable)
    UInventoryComponent* GetBoughtItems();
    
    UFUNCTION(BlueprintCallable)
    void CheckIfLoadedCountryFlagMaterial(TSoftObjectPtr<UMaterialInstance> FlagMaterial);
    
    UFUNCTION(BlueprintCallable)
    void AddUsedSkill(ETradingSkill NewValue);
    

    // Fix for true pure virtual functions not being implemented
};

