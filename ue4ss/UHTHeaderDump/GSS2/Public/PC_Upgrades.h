#pragma once
#include "CoreMinimal.h"
#include "PcBaseTab.h"
#include "PC_Upgrades.generated.h"

class UTechnologyAsset;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UPC_Upgrades : public UPcBaseTab {
    GENERATED_BODY()
public:
    UPC_Upgrades();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLMBState(bool bInLmbDown);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HightlightSpecificUpgrade(UTechnologyAsset* TechnologyToHightLight);
    
};

