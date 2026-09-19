#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AirplaneHole.generated.h"

UCLASS(Blueprintable)
class GSS2_API AAirplaneHole : public AActor {
    GENERATED_BODY()
public:
    AAirplaneHole(const FObjectInitializer& ObjectInitializer);

};

