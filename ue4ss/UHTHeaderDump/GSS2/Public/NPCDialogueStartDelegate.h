#pragma once
#include "CoreMinimal.h"
#include "NPCDialogueStartDelegate.generated.h"

class AGSSNPAICharacterBase;
class UDialogueNode;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FNPCDialogueStart, AGSSNPAICharacterBase*, HumanBase, UDialogueNode*, DialogueNode, int32, DialogueID);

