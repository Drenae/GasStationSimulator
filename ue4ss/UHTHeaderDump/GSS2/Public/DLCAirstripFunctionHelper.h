#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "DLCAirstripFunctionHelper.generated.h"

class ADLCAirstripManager;
class ADLCTradingSystemManager;
class UAirportScheduleManager;
class UObject;

UCLASS(Blueprintable)
class GSS2_API UDLCAirstripFunctionHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDLCAirstripFunctionHelper();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsNoAirplaneInAir(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ADLCTradingSystemManager* GetDLCTradingSystemManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ADLCAirstripManager* GetDLCAirstripManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UAirportScheduleManager* GetAirportScheduleManager(UObject* WorldContextObject);
    
};

