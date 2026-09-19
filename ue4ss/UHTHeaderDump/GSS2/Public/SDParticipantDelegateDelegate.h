#pragma once
#include "CoreMinimal.h"
#include "SDParticipantDelegateDelegate.generated.h"

class AAICharacterBase;
class USDMinigameParticipantComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSDParticipantDelegate, USDMinigameParticipantComponent*, MinigameParticipantComponent, AAICharacterBase*, Participant);

