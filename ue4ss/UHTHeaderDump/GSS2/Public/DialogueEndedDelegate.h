#pragma once
#include "CoreMinimal.h"
#include "DialogueEndedDelegate.generated.h"

class UDialogueGraph;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogueEnded, UDialogueGraph*, GameplayGraph);

