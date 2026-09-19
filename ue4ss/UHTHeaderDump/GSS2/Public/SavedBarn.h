#pragma once
#include "CoreMinimal.h"
#include "SavedBarn.generated.h"

USTRUCT(BlueprintType)
struct FSavedBarn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BarnLevel;
    
    GSS2_API FSavedBarn();
};

