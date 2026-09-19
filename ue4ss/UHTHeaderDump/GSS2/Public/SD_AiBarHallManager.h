#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SD_AiBarHallManager.generated.h"

UCLASS(Blueprintable)
class GSS2_API ASD_AiBarHallManager : public AActor {
    GENERATED_BODY()
public:
    ASD_AiBarHallManager(const FObjectInitializer& ObjectInitializer);

};

