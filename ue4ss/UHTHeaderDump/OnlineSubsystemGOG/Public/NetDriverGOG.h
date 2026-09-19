#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NetDriver -FallbackName=NetDriver
#include "NetDriverGOG.generated.h"

UCLASS(Blueprintable, NonTransient)
class UNetDriverGOG : public UNetDriver {
    GENERATED_BODY()
public:
    UNetDriverGOG();

};

