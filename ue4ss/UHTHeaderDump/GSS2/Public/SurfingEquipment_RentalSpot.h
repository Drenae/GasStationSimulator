#pragma once
#include "CoreMinimal.h"
#include "RentalSpot.h"
#include "SurfingEquipment_RentalSpot.generated.h"

class AWaterVehicle;

UCLASS(Blueprintable)
class GSS2_API ASurfingEquipment_RentalSpot : public ARentalSpot {
    GENERATED_BODY()
public:
    ASurfingEquipment_RentalSpot(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnCustomerGotBack(AWaterVehicle* Boat);
    
};

