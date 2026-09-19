#pragma once
#include "CoreMinimal.h"
#include "ENPCAccent.h"
#include "ENPCGender.h"
#include "AccentConnection.generated.h"

class UDialogueGraph;

USTRUCT(BlueprintType)
struct FAccentConnection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPCGender NPCGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPCAccent NPCAccent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogueGraph* DialogueGraph;
    
    GSS2_API FAccentConnection();
};

