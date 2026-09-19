#pragma once
#include "CoreMinimal.h"
#include "CamperWashingSettingsPerDifficulty.h"
#include "RvMinigameBaseSettings.h"
#include "CamperWashingSettings.generated.h"

class ACamperStainActor;

UCLASS(Blueprintable)
class GSS2_API UCamperWashingSettings : public URvMinigameBaseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCamperWashingSettingsPerDifficulty> SettingsPerDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ACamperStainActor>> StainsClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWaterFlowDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseWaterFlowDurationPenaltyPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CleaningSolutionFlowDurationPenalty;
    
    UCamperWashingSettings();

};

