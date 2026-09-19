#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "DLCSettings.h"
#include "EOSManagersSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class EOSMANAGERS_API UEOSManagersSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDLCSettings> DLCSettings;
    
    UEOSManagersSettings();

};

