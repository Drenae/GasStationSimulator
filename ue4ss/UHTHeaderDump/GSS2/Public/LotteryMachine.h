#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "LotteryPredefinedSettings.h"
#include "OnLotteryCancelDelegate.h"
#include "OnLotteryFinishDelegate.h"
#include "OnLotteryStartDelegate.h"
#include "OnLotteryWinDelegate.h"
#include "OnTicketBuyDelegate.h"
#include "eLotteryState.h"
#include "LotteryMachine.generated.h"

class UWidgetComponent;

UCLASS(Blueprintable)
class GSS2_API ALotteryMachine : public AInteractableBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTicketBuy OnTicketBuy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLotteryWin OnLotteryWin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLotteryFinish OnLotteryFinish;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLotteryStart OnLotteryStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLotteryCancel OnLotteryCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    eLotteryState LotteryState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LotteryPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentEarnings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentTimeInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentNameIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HappyAngryMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MachineMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* LotteryWidget;
    
    ALotteryMachine(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLotteryParameters(FLotteryPredefinedSettings SettingsToSet, bool bIsUpdateAfterLoad);
    
    UFUNCTION(BlueprintCallable)
    void FinishLottery();
    
    UFUNCTION(BlueprintCallable)
    void CreateNotification(bool bShow);
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckOpenedSection(FName MapName);
    
public:
    UFUNCTION(BlueprintCallable)
    void CancelLottery();
    
    UFUNCTION(BlueprintCallable)
    bool BuyTicket();
    
};

