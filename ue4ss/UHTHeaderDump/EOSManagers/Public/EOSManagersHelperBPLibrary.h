#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=JsonUtilities -ObjectName=JsonObjectWrapper -FallbackName=JsonObjectWrapper
#include "EUsedPlatform.h"
#include "EOSManagersHelperBPLibrary.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class EOSMANAGERS_API UEOSManagersHelperBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEOSManagersHelperBPLibrary();

    UFUNCTION(BlueprintCallable)
    static bool JSONFileToStruct(const TArray<uint8>& FileContent, UPARAM(Ref) FJsonObjectWrapper& JsonObjectWrapper);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* ImageFileToTexture2D(const TArray<uint8>& FileContent);
    
    UFUNCTION(BlueprintCallable)
    static EUsedPlatform GetUsedPlatformByName(FName PlatformName);
    
};

