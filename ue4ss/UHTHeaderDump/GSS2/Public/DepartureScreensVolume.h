#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TriggerVolume -FallbackName=TriggerVolume
#include "DepartureScreensVolume.generated.h"

UCLASS(Blueprintable)
class GSS2_API ADepartureScreensVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
    ADepartureScreensVolume(const FObjectInitializer& ObjectInitializer);

};

