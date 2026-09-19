#pragma once
#include "CoreMinimal.h"
#include "QuestlineActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestlineAction, bool, bIsPressed);

