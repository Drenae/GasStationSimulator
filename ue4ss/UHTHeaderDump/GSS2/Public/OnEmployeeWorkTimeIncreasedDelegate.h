#pragma once
#include "CoreMinimal.h"
#include "OnEmployeeWorkTimeIncreasedDelegate.generated.h"

class AAICharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEmployeeWorkTimeIncreased, AAICharacterBase*, Employee, int32, AddedTime);

