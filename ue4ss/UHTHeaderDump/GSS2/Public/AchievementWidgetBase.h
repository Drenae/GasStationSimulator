#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "AchievementWidgetBase.generated.h"

class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GSS2_API UAchievementWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UAchievementWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAchievementValues(UTexture2D* Icon, const FText& Name);
    
};

