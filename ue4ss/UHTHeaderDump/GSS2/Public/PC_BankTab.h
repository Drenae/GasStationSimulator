#pragma once
#include "CoreMinimal.h"
#include "Loan.h"
#include "PcBaseTab.h"
#include "Templates/SubclassOf.h"
#include "PC_BankTab.generated.h"

class UGSSEvent;
class ULoansDataAsset;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UPC_BankTab : public UPcBaseTab {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DebtAmmount;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGSSEvent> EventClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULoansDataAsset* Loans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoan SelectedLoan;
    
public:
    UPC_BankTab();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowValueToReturn();
    
    UFUNCTION(BlueprintCallable)
    void RequestLoan(const FString& SelectedItem);
    
    UFUNCTION(BlueprintCallable)
    void PickLoan(const FString& SelectedItem);
    
    UFUNCTION(BlueprintCallable)
    void PayLoan(float Amount);
    
};

