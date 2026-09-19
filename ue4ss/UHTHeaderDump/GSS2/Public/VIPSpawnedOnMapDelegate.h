#pragma once
#include "CoreMinimal.h"
#include "VIPSpawnedOnMapDelegate.generated.h"

class AAICharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVIPSpawnedOnMap, AAICharacterBase*, VIPCustomer);

