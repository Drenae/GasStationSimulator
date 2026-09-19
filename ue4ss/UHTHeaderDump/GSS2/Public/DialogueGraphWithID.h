#pragma once
#include "CoreMinimal.h"
#include "DialogueGraphWithID.generated.h"

class UDialogueGraph;

USTRUCT(BlueprintType)
struct FDialogueGraphWithID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDialogueGraph> DialogueGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DialogueID;
    
    GSS2_API FDialogueGraphWithID();
};

