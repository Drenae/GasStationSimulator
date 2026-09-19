#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "SDMinigameWidget.generated.h"

class ASDMinigameBase;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API USDMinigameWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASDMinigameBase* ParentMinigame;
    
public:
    USDMinigameWidget();

    UFUNCTION(BlueprintCallable)
    void SetParentMinigame(ASDMinigameBase* InMinigame);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeMinigameWidget();
    
};

