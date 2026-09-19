#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InteractionDefines.generated.h"

UCLASS(Blueprintable)
class GSS2_API UInteractionDefines : public UObject {
    GENERATED_BODY()
public:
    UInteractionDefines();

    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetAxisMappings();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetAllInputs();
    
};

