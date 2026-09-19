#pragma once
#include "CoreMinimal.h"
#include "DialogueGraphWithID.h"
#include "DialogueGraphWithIDCooldown.generated.h"

USTRUCT(BlueprintType)
struct FDialogueGraphWithIDCooldown {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueGraphWithID DialogueGraphWithID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    GSS2_API FDialogueGraphWithIDCooldown();
};

