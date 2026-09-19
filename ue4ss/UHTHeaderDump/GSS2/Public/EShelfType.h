#pragma once
#include "CoreMinimal.h"
#include "EShelfType.generated.h"

UENUM(BlueprintType)
enum class EShelfType : uint8 {
    ShopShelf,
    GarageShelf,
    TapeShelf,
    PartyShelf,
};

