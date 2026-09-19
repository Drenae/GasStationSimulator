#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "MinigameMarshalWandsWidget.generated.h"

class AMinigame_MarshalWands;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UMinigameMarshalWandsWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMinigame_MarshalWands* MinigameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> AllertWidgetClass;
    
public:
    UMinigameMarshalWandsWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateWidgetValues();
    
};

