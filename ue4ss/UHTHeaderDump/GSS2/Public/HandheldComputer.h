#pragma once
#include "CoreMinimal.h"
#include "KeyItem.h"
#include "HandheldComputer.generated.h"

class UWidgetInteractionComponent;

UCLASS(Blueprintable)
class GSS2_API AHandheldComputer : public AKeyItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetInteractionComponent* InteractionWidget;
    
    AHandheldComputer(const FObjectInitializer& ObjectInitializer);

};

