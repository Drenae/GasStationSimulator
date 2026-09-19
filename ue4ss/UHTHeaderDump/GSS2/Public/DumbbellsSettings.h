#pragma once
#include "CoreMinimal.h"
#include "DumbbellSetup.h"
#include "DumbbellsSettingsPerDifficulty.h"
#include "RvMinigameBaseSettings.h"
#include "DumbbellsSettings.generated.h"

UCLASS(Blueprintable)
class GSS2_API UDumbbellsSettings : public URvMinigameBaseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDumbbellsSettingsPerDifficulty> SettingsPerDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDumbbellSetup> DumbbellsSetups;
    
    UDumbbellsSettings();

};

