#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PhysicsVolume -FallbackName=PhysicsVolume
#include "OceanologySwimVolume.generated.h"

UCLASS(Blueprintable)
class OCEANOLOGY_PLUGIN_API AOceanologySwimVolume : public APhysicsVolume {
    GENERATED_BODY()
public:
    AOceanologySwimVolume(const FObjectInitializer& ObjectInitializer);

};

