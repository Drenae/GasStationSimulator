#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "FileManagerDeveloperSettings.generated.h"

class UUserWidget;

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class DLFILEMANAGER_API UFileManagerDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> FilePickerWidget;
    
    UFileManagerDeveloperSettings();

};

