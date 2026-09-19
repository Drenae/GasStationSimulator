#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Oceanology_PluginBPLibrary.generated.h"

UCLASS(Blueprintable)
class UOceanology_PluginBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOceanology_PluginBPLibrary();

    UFUNCTION(BlueprintCallable)
    static float Oceanology_PluginSampleFunction(float Param);
    
};

