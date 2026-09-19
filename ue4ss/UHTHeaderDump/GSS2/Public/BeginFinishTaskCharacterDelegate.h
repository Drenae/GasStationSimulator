#pragma once
#include "CoreMinimal.h"
#include "ETaskResult.h"
#include "BeginFinishTaskCharacterDelegate.generated.h"

class UTaskBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBeginFinishTaskCharacter, UTaskBase*, FinishedTask, const ETaskResult, TaskResult, const FString&, Reason);

