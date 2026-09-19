#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DepartureScreen.generated.h"

UCLASS(Blueprintable)
class GSS2_API ADepartureScreen : public AActor {
    GENERATED_BODY()
public:
    ADepartureScreen(const FObjectInitializer& ObjectInitializer);

};

