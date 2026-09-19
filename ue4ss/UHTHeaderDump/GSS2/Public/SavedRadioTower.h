#pragma once
#include "CoreMinimal.h"
#include "SavedRadioTower.generated.h"

USTRUCT(BlueprintType)
struct FSavedRadioTower {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RadioTowerLevel;
    
    GSS2_API FSavedRadioTower();
};

