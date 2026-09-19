#pragma once
#include "CoreMinimal.h"
#include "DialogueQueueItem.generated.h"

class UDialogueGraph;
class UDialogueNode;

USTRUCT(BlueprintType)
struct FDialogueQueueItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogueGraph* GraphReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogueNode* NodeReference;
    
    GSS2_API FDialogueQueueItem();
};

