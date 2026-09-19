#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "DLCCinemaFunctionLibrary.generated.h"

class ADLCDriveInCinemaManager;
class UObject;

UCLASS(Blueprintable)
class GSS2_API UDLCCinemaFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDLCCinemaFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ADLCDriveInCinemaManager* GetDLCCinemaManager(UObject* WorldContextObject);
    
};

