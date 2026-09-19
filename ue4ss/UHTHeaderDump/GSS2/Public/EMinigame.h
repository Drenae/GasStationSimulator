#pragma once
#include "CoreMinimal.h"
#include "EMinigame.generated.h"

UENUM(BlueprintType)
enum class EMinigame : uint8 {
    None,
    Digger,
    Fueling,
    Painting,
    CashRegister,
    RacingCar,
    LockPick,
    Decorations,
    Shelfs,
    Throwing,
    TrashBag,
    JerryCan,
    Broom,
    Money,
    RacingCar2,
    Popularity,
    WheelGarage,
    MirrorGarage,
    ScratchGarage,
    OilGarage,
    CoolantGarage,
    SparkplugGarage,
    GarageMainTutorial,
    Employee,
    RefillShelvsProducts,
    RefillShelvsCarParts,
    ProductPriceProducts,
    ProductPriceCarParts,
    Max,
};

