#pragma once
#include "CoreMinimal.h"
#include "AISpawnPoint.h"
#include "NoCarAISpawnPoint.generated.h"

UCLASS(Blueprintable)
class GSS2_API ANoCarAISpawnPoint : public AAISpawnPoint {
    GENERATED_BODY()
public:
    ANoCarAISpawnPoint(const FObjectInitializer& ObjectInitializer);

};

