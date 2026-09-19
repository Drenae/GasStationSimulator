#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LadderParent.generated.h"

UCLASS(Blueprintable)
class GSS2_API ALadderParent : public AActor {
    GENERATED_BODY()
public:
    ALadderParent(const FObjectInitializer& ObjectInitializer);

};

