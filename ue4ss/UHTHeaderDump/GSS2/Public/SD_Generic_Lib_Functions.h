#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SD_Generic_Lib_Functions.generated.h"

UCLASS(Blueprintable)
class GSS2_API USD_Generic_Lib_Functions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USD_Generic_Lib_Functions();

private:
    UFUNCTION(BlueprintCallable)
    static bool IsGameShipping();
    
};

