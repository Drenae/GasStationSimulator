#pragma once
#include "CoreMinimal.h"
#include "OnChemicalBuildingLevelUpDelegate.generated.h"

class AChemicalBath_Building;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChemicalBuildingLevelUp, int32, Level, AChemicalBath_Building*, BuildingRef);

