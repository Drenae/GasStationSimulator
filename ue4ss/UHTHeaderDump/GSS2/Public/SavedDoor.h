#pragma once
#include "CoreMinimal.h"
#include "EDoorState.h"
#include "SavedDoor.generated.h"

USTRUCT(BlueprintType)
struct FSavedDoor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PathName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDoorState DoorState;
    
    GSS2_API FSavedDoor();
};

