#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "SavedPassiveIncome.h"
#include "PassiveIncomePopup.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UPassiveIncomePopup : public UUserWidget {
    GENERATED_BODY()
public:
    UPassiveIncomePopup();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupPopup(FSavedPassiveIncome RecievedIncome);
    
};

