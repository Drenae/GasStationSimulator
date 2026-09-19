#pragma once
#include "CoreMinimal.h"
#include "OnNewQuestLineFollowedDelegate.generated.h"

class UActiveQuestLine;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewQuestLineFollowed, UActiveQuestLine*, FollowedQuestLine);

