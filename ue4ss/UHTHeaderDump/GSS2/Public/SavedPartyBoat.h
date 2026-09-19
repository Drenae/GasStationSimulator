#pragma once
#include "CoreMinimal.h"
#include "SavedPartyBoat.generated.h"

USTRUCT(BlueprintType)
struct FSavedPartyBoat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllPassengersLeft;
    
    GSS2_API FSavedPartyBoat();
};

