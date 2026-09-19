#pragma once
#include "CoreMinimal.h"
#include "DialogueStartedDelegate.generated.h"

class UDialogueGraph;
class UDialogueNode;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDialogueStarted, UDialogueGraph*, GameplayGraph, UDialogueNode*, DialogueNode);

