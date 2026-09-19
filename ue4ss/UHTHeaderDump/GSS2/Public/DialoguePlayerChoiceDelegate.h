#pragma once
#include "CoreMinimal.h"
#include "DialoguePlayerChoiceDelegate.generated.h"

class UDialogueNode;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialoguePlayerChoice, const TArray<UDialogueNode*>&, Choices);

