#pragma once
#include "CoreMinimal.h"
#include "SDMinigameParticipantsDelegateDelegate.generated.h"

class USDMinigameParticipantComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSDMinigameParticipantsDelegate, USDMinigameParticipantComponent*, MinigameParticipantComponent);

