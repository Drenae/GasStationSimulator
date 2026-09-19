#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavMeshBoundsVolume -FallbackName=NavMeshBoundsVolume
#include "GSSNavMeshBoundsVolume.generated.h"

UCLASS(Blueprintable)
class GSS2_API AGSSNavMeshBoundsVolume : public ANavMeshBoundsVolume {
    GENERATED_BODY()
public:
    AGSSNavMeshBoundsVolume(const FObjectInitializer& ObjectInitializer);

};

