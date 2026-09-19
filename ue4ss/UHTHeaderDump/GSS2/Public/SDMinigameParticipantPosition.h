#pragma once
#include "CoreMinimal.h"
#include "SDMinigameParticipantPosition.generated.h"

class AAICharacterBase;

USTRUCT(BlueprintType)
struct FSDMinigameParticipantPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrepared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAICharacterBase* Occupant;
    
    GSS2_API FSDMinigameParticipantPosition();
};

