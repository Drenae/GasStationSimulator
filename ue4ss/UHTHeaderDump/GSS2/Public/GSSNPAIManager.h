#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NopeAISystem -ObjectName=NPAIManager -FallbackName=NPAIManager
#include "GSSNPAIManager.generated.h"

UCLASS(Blueprintable)
class GSS2_API AGSSNPAIManager : public ANPAIManager {
    GENERATED_BODY()
public:
    AGSSNPAIManager(const FObjectInitializer& ObjectInitializer);

};

