#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "RvMinigameBaseSettings.h"
#include "SaunaSettingsPerDifficulty.h"
#include "SaunaSettings.generated.h"

UCLASS(Blueprintable)
class GSS2_API USaunaSettings : public URvMinigameBaseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaunaSettingsPerDifficulty> SettingsPerDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange CollectibleDotsSpawnSplineTimeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnCollectibleDotsInitDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MistakeModeDuration;
    
    USaunaSettings();

};

