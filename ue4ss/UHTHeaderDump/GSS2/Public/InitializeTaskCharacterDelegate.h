#pragma once
#include "CoreMinimal.h"
#include "InitializeTaskCharacterDelegate.generated.h"

class UTaskBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInitializeTaskCharacter, UTaskBase*, StartedTask);

