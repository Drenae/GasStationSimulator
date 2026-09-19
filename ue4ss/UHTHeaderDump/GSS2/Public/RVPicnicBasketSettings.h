#pragma once
#include "CoreMinimal.h"
#include "PicnicProductOffset.h"
#include "PicnicSettingsPerDifficulty.h"
#include "RvMinigameBaseSettings.h"
#include "RVPicnicBasketSettings.generated.h"

UCLASS(Blueprintable)
class GSS2_API URVPicnicBasketSettings : public URvMinigameBaseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPicnicSettingsPerDifficulty> SettingsPerDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPicnicProductOffset> ProductOffsetsInBasket;
    
    URVPicnicBasketSettings();

};

