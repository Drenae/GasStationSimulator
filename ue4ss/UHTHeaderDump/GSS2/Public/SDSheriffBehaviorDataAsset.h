#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SDSheriffBehaviorSettings.h"
#include "SDSheriffBehaviorDataAsset.generated.h"

UCLASS(Blueprintable)
class GSS2_API USDSheriffBehaviorDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimalSheriffSpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDSheriffBehaviorSettings> SheriffBehaviorSettings;
    
    USDSheriffBehaviorDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSDSheriffBehaviorSettings GetBehaviourSettings(int32 InLevel) const;
    
};

