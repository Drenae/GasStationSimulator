#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "SignificanceLevel.h"
#include "DistanceOptimizerSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class DISTANCEBASEDOPTIMIZER_API UDistanceOptimizerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSignificanceLevel> SignificanceLevelsDefinitions;
    
    UDistanceOptimizerSettings();

};

