#pragma once
#include "CoreMinimal.h"
#include "OnNewTaskAssignedDelegate.generated.h"

class AAICharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewTaskAssigned, AAICharacterBase*, CharacterRef);

