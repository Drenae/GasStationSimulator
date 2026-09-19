#pragma once
#include "CoreMinimal.h"
#include "SavedPartyTime.generated.h"

USTRUCT(BlueprintType)
struct FSavedPartyTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAreLightsOnOff;
    
    GSS2_API FSavedPartyTime();
};

