#pragma once
#include "CoreMinimal.h"
#include "ENotificationType.generated.h"

UENUM(BlueprintType)
enum class ENotificationType : uint8 {
    CarWash,
    Garage,
    EmployeeNotWorking,
    FuelDelivery,
    WaterFuelDelivery,
    AiportFuelDelivery,
    MagazineTruck,
    WaterMagazineDelivery,
    CashShop,
    Fuel,
    WaterFuel,
    TrashBinFull,
    LowPressure,
    IceCream,
    ShowMail,
    NoOk,
    NoFuel,
    Scuba,
    Windsurfing,
    Lottery,
    Wreck,
    Cinema,
    RVService,
    SDFightClub,
    SDParkingDeal,
    SDShadyWarehouse,
    SDCasino,
    SDCustomerAtBar,
    SDGangPartyInProgress,
    SDFightClubTraining,
};

