#pragma once
#include "CoreMinimal.h"
#include "DialogueGraphOwner.generated.h"

class UDialogueGraph;

USTRUCT(BlueprintType)
struct FDialogueGraphOwner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDialogueGraph> GraphReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogueGraph* GameplayGraphReference;
    
    GSS2_API FDialogueGraphOwner();
};

