#pragma once
#include "CoreMinimal.h"
#include "ESDShadynessModifierPersistance.h"
#include "SDShadynessModifierSettings.generated.h"

USTRUCT(BlueprintType)
struct FSDShadynessModifierSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDShadynessModifierPersistance ModifierPersistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadynessDelta;
    
    GSS2_API FSDShadynessModifierSettings();
};

