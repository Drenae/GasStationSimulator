#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DefaultPawn -FallbackName=DefaultPawn
#include "MainMenuPawn.generated.h"

UCLASS(Blueprintable)
class AMainMenuPawn : public ADefaultPawn {
    GENERATED_BODY()
public:
    AMainMenuPawn(const FObjectInitializer& ObjectInitializer);

};

