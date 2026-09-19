#pragma once
#include "CoreMinimal.h"
#include "ETaskResult.h"
#include "Templates/SubclassOf.h"
#include "OnAITaskFinishedDelegate.generated.h"

class AAICharacterBase;
class UTaskBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAITaskFinished, AAICharacterBase*, AICharacter, TSubclassOf<UTaskBase>, TaskClass, ETaskResult, TaskResult);

