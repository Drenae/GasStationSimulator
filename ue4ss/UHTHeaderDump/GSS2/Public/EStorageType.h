#pragma once
#include "CoreMinimal.h"
#include "EStorageType.generated.h"

UENUM(BlueprintType)
enum class EStorageType : uint8 {
    WARE_HOUSE_STORAGE,
    AIRPORT_STORAGE,
    ALL,
};

