#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DiscoBall.generated.h"

UCLASS(Blueprintable)
class GSS2_API ADiscoBall : public AActor {
    GENERATED_BODY()
public:
    ADiscoBall(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TurnLightsOnOff(bool bShouldBeOn);
    
};

