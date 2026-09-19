#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetComponent -FallbackName=WidgetComponent
#include "NPWidgetComponentFace.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NOPEAISYSTEM_API UNPWidgetComponentFace : public UWidgetComponent {
    GENERATED_BODY()
public:
    UNPWidgetComponentFace(const FObjectInitializer& ObjectInitializer);

};

