#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "UIVisibilityInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UUIVisibilityInterface : public UInterface {
    GENERATED_BODY()
};

class IUIVisibilityInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Interface_SetVisibility(FName PanelName, ESlateVisibility InVisibility);
    
};

