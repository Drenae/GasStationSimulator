#pragma once
#include "CoreMinimal.h"
#include "AdditionalKeyItemWidget.h"
#include "DesertCarWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UDesertCarWidget : public UAdditionalKeyItemWidget {
    GENERATED_BODY()
public:
    UDesertCarWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTime(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateScore(int32 CurrentTraceCount, int32 MaxTraceCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowFinalResult(float MetaTimer, float BestScoreFlot, bool bNewRecord);
    
};

