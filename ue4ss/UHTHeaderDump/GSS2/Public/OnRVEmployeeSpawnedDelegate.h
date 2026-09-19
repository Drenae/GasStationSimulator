#pragma once
#include "CoreMinimal.h"
#include "OnRVEmployeeSpawnedDelegate.generated.h"

class ARVCampEmployee;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRVEmployeeSpawned, ARVCampEmployee*, RVEmployee);

