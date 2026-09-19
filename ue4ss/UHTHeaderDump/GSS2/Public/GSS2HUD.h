#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
#include "GSS2HUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class AGSS2HUD : public AHUD {
    GENERATED_BODY()
public:
    AGSS2HUD(const FObjectInitializer& ObjectInitializer);

};

