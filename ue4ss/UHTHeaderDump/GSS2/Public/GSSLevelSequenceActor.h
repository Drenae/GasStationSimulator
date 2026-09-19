#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LevelSequence -ObjectName=LevelSequenceActor -FallbackName=LevelSequenceActor
#include "GSSLevelSequenceActor.generated.h"

UCLASS(Blueprintable)
class GSS2_API AGSSLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    AGSSLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

};

