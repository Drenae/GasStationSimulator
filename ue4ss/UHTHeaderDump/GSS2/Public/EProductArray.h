#pragma once
#include "CoreMinimal.h"
#include "EProductArray.generated.h"

UENUM(BlueprintType)
enum class EProductArray : uint8 {
    CiggaretShop,
    FoodsShop,
    HatsShop,
    SoftDrinksShop,
    AlcoholsShop,
    MAX,
};

