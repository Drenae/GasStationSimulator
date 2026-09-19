#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BuildingParentWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GSS2_API UBuildingParentWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UBuildingParentWidget();

};

