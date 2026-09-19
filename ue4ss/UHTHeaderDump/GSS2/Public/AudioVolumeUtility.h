#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioVolume -FallbackName=AudioVolume
#include "AudioVolumeUtility.generated.h"

UCLASS(Blueprintable)
class GSS2_API AAudioVolumeUtility : public AAudioVolume {
    GENERATED_BODY()
public:
    AAudioVolumeUtility(const FObjectInitializer& ObjectInitializer);

};

