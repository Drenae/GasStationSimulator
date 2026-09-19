#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ActionManager.generated.h"

UCLASS(Blueprintable)
class GSS2_API AActionManager : public AActor {
    GENERATED_BODY()
public:
    AActionManager(const FObjectInitializer& ObjectInitializer);

};

