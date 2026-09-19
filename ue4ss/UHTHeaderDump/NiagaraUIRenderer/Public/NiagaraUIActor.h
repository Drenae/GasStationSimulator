#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "NiagaraUIActor.generated.h"

UCLASS(Blueprintable)
class ANiagaraUIActor : public AActor {
    GENERATED_BODY()
public:
    ANiagaraUIActor(const FObjectInitializer& ObjectInitializer);

};

