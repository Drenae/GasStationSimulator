#pragma once
#include "CoreMinimal.h"
#include "NPCDialogueEndDelegate.generated.h"

class AGSSNPAICharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNPCDialogueEnd, AGSSNPAICharacterBase*, HumanBase);

