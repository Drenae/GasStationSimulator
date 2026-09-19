#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EasyFileDialogBPLibrary.generated.h"

UCLASS(Blueprintable)
class UEasyFileDialogBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEasyFileDialogBPLibrary();

    UFUNCTION(BlueprintCallable)
    static float EasyFileDialogSampleFunction(float Param);
    
};

