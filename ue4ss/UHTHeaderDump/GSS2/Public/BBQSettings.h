#pragma once
#include "CoreMinimal.h"
#include "BBQSettingsPerDifficulty.h"
#include "RvMinigameBaseSettings.h"
#include "BBQSettings.generated.h"

UCLASS(Blueprintable)
class GSS2_API UBBQSettings : public URvMinigameBaseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBBQSettingsPerDifficulty> SettingsPerDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoRepeatNavigationGamepadCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTutorialStep;
    
    UBBQSettings();

};

