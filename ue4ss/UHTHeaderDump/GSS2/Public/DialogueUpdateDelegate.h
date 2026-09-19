#pragma once
#include "CoreMinimal.h"
#include "DialogueUpdateDelegate.generated.h"

class UDialogueGraph;
class UDialogueNode;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDialogueUpdate, UDialogueGraph*, GameplayGraph, UDialogueNode*, NewNode);

