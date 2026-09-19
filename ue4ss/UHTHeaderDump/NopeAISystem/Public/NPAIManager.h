#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "NPAIManager.generated.h"

class ANPAIManager;
class UObject;

UCLASS(Blueprintable)
class NOPEAISYSTEM_API ANPAIManager : public AActor {
    GENERATED_BODY()
public:
    ANPAIManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ANPAIManager* GetAIManager(UObject* WorldContextObject);
    
};

