#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PlayerArea.generated.h"

UCLASS(Blueprintable)
class GSS2_API APlayerArea : public AActor {
    GENERATED_BODY()
public:
    APlayerArea(const FObjectInitializer& ObjectInitializer);

};

