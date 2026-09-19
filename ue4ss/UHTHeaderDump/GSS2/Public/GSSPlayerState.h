#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerState -FallbackName=PlayerState
#include "CharacterCreditsDelegateDelegate.h"
#include "CharacterMoneyDelegateDelegate.h"
#include "EEconomyDetailedYieldType.h"
#include "EEconomyGeneralYieldType.h"
#include "EMoneyType.h"
#include "OnContractPointsUpdateDelegate.h"
#include "GSSPlayerState.generated.h"

class UInventoryComponent;
class UUserWidget;

UCLASS(Blueprintable)
class GSS2_API AGSSPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* ItemInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastLoanVolcanoAngerIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ContractPoints;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterMoneyDelegate OnCharacterMoneyDelegate;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterCreditsDelegate OnCharacterCreditsDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContractPointsUpdate OnContractPointsUpdated;
    
public:
    AGSSPlayerState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SubtractMoney(EEconomyDetailedYieldType DetailedYieldType, float Quantity, float money, bool bTrackEconomy, EMoneyType MoneyType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCircularMenuRef(UUserWidget* CircularMenuRef);
    
    UFUNCTION(BlueprintCallable)
    void PayLoan(float HowMuchDoYouWantToPay, float& HowMuchYouPaid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEnoughMoney(float money);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEnoughContractPoints(float inPoints);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoney() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCredits() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetContractPoints();
    
    UFUNCTION(BlueprintCallable)
    void AddMoney(EEconomyDetailedYieldType DetailedYieldType, float Quantity, float money, bool bTrackEconomy, EMoneyType MoneyType, EEconomyGeneralYieldType ForcedYieldType);
    
    UFUNCTION(BlueprintCallable)
    void AddCredits(float Credits);
    
    UFUNCTION(BlueprintCallable)
    void AddContractPoints(float inPoints);
    
};

