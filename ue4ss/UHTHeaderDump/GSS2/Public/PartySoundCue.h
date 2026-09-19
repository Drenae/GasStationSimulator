#pragma once
#include "CoreMinimal.h"
#include "ENumberOfDancingNPC.h"
#include "PartySoundCue.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct GSS2_API FPartySoundCue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENumberOfDancingNPC NumberOfDancingNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> SoundCue;
    
    FPartySoundCue();
};

