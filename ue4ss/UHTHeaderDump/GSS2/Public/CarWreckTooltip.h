#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CarWreckTooltip.generated.h"

UCLASS(Blueprintable)
class GSS2_API ACarWreckTooltip : public AActor {
    GENERATED_BODY()
public:
    ACarWreckTooltip(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupWidget();
    
};

