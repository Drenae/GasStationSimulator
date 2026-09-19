#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SDSheriffActionBase.generated.h"

class USDStandaloneSheriffTrigger;

UCLASS(Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class GSS2_API USDSheriffActionBase : public UObject {
    GENERATED_BODY()
public:
    USDSheriffActionBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure=false)
    FText GetActionDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Execute(USDStandaloneSheriffTrigger* InSheriffTrigger);
    
};

