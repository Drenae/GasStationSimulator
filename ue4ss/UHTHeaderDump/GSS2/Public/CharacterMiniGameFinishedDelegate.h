#pragma once
#include "CoreMinimal.h"
#include "ERenown_Reasons.h"
#include "ETaskResult.h"
#include "Templates/SubclassOf.h"
#include "CharacterMiniGameFinishedDelegate.generated.h"

class AActor;
class UTaskBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FCharacterMiniGameFinished, TSubclassOf<UTaskBase>, FinishedTaskClass, const ERenown_Reasons, RenownReason, const ETaskResult, TaskResult, const float, TaskMoney, AActor*, Instaginator);

