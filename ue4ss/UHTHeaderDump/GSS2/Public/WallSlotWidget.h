#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "WallSlotWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GSS2_API UWallSlotWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UWallSlotWidget();

};

