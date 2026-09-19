#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EDLCName.h"
#include "OnCarPutOnSaleDelegate.h"
#include "OnSaleFinishedDelegate.h"
#include "SaleSlot.h"
#include "TimeStruct.h"
#include "ViewersIncreasePerInterest.h"
#include "AuctionsManager.generated.h"

class AExhibitionSpotSlot;
class AJunkyardCarWreck;
class AJunkyardCarWreckCustomizable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API UAuctionsManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSaleFinished OnSaleFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCarPutOnSale OnCarPutOnSale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SaleDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewersUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarBasePriceInterestDefaultPercentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialSlotsNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditionalSlotsNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrySellCarNewViewersNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FViewersIncreasePerInterest> ViewersIncreaseSettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaleSlot> SaleSlots;
    
public:
    UAuctionsManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateViewers(FSaleSlot& SaleSlot);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSaleSlots(TArray<FSaleSlot> InSaleSlots);
    
    UFUNCTION(BlueprintCallable)
    void SetSaleSlot(AJunkyardCarWreck* CarWreck, FSaleSlot SaleSettings);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSale(UPARAM(Ref) FSaleSlot& SaleSlot);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGameTimeUpdated(FTimeStruct UpdatedTime);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishGameLoaded(bool bGameLoaded);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDLCActivationStateChanged(EDLCName DLCName, bool bActivated);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSaleSlot> GetSaleSlots();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindMatchingInterestSettings(float CurrentInterest, FViewersIncreasePerInterest& OutInterestSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindCarSaleSlot(AJunkyardCarWreckCustomizable* CarWreck, FSaleSlot& OutSaleSlot);
    
    UFUNCTION(BlueprintCallable)
    bool ConfirmSale(UPARAM(Ref) FSaleSlot& SaleSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculatePriceAfterUncleTribute(const float CarPrice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateCarSaleInterest(AExhibitionSpotSlot* ExhibitionSpotSlot, float CarSellPrice);
    
    UFUNCTION(BlueprintCallable)
    void ActivateSale(AExhibitionSpotSlot* ExhibitionSpotSlot, float CarSellPrice);
    
};

