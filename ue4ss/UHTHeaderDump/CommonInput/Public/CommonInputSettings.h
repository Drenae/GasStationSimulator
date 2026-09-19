#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CommonInputPlatformBaseData.h"
#include "Templates/SubclassOf.h"
#include "CommonInputSettings.generated.h"

class UCommonUIInputData;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class COMMONINPUT_API UCommonInputSettings : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonUIInputData> InputData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<FName, FCommonInputPlatformBaseData> CommonInputPlatformData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableInputMethodThrashingProtection;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputMethodThrashingLimit;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double InputMethodThrashingWindowInSeconds;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double InputMethodThrashingCooldownInSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowOutOfFocusDeviceInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonUIInputData> InputDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCommonInputPlatformBaseData CurrentPlatform;
    
public:
    UCommonInputSettings();

private:
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetRegisteredPlatforms();
    
};

