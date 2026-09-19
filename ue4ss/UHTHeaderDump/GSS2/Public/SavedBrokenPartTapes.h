#pragma once
#include "CoreMinimal.h"
#include "EAirplanePartType.h"
#include "SavedTape.h"
#include "SavedBrokenPartTapes.generated.h"

USTRUCT(BlueprintType)
struct FSavedBrokenPartTapes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAirplanePartType PartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedTape> TapesAttached;
    
    GSS2_API FSavedBrokenPartTapes();
};

