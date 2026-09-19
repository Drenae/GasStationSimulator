#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CarWreck_Tooltip.generated.h"

class AJunkyardCarWreck;

UCLASS(Blueprintable)
class GSS2_API ACarWreck_Tooltip : public AActor {
    GENERATED_BODY()
public:
    ACarWreck_Tooltip(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupWidget(AJunkyardCarWreck* CarWreck);
    
};

