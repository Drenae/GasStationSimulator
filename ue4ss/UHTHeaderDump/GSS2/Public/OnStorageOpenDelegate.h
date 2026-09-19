#pragma once
#include "CoreMinimal.h"
#include "OnStorageOpenDelegate.generated.h"

class AJunkyardStorage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStorageOpen, AJunkyardStorage*, StorageRef);

