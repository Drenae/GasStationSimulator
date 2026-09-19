#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "HammerBuildingCategoryWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GSS2_API UHammerBuildingCategoryWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UHammerBuildingCategoryWidget();

};

