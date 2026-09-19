#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EGarageMinigame.h"
#include "EGarageNotification.h"
#include "GarageHUDBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UGarageHUDBase : public UUserWidget {
    GENERATED_BODY()
public:
    UGarageHUDBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchHints(EGarageMinigame GameType, bool bMinigameStarted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Show(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotificationOfBroken(EGarageNotification TypeOfBrokenPart);
    
};

