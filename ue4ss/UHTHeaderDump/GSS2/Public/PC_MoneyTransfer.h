#pragma once
#include "CoreMinimal.h"
#include "PcBaseTab.h"
#include "PC_MoneyTransfer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UPC_MoneyTransfer : public UPcBaseTab {
    GENERATED_BODY()
public:
    UPC_MoneyTransfer();

protected:
    UFUNCTION(BlueprintCallable)
    void TransferMoney(int32 Amount, const FString& TargetLevelName);
    
};

