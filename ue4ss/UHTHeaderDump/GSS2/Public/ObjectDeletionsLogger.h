#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ObjectDeletionsLogger.generated.h"

UCLASS(Blueprintable)
class GSS2_API AObjectDeletionsLogger : public AActor {
    GENERATED_BODY()
public:
    AObjectDeletionsLogger(const FObjectInitializer& ObjectInitializer);

};

