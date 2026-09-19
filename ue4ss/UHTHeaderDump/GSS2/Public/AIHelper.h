#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AIHelper.generated.h"

class AInteractableBuilding;
class UDA_SpecificAITask;

UCLASS(Blueprintable)
class GSS2_API UAIHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAIHelper();

    UFUNCTION(BlueprintCallable)
    static TArray<TSoftObjectPtr<AInteractableBuilding>> GetBuildingsFromSpecificAITask(const UDA_SpecificAITask* SpecificAITask);
    
};

