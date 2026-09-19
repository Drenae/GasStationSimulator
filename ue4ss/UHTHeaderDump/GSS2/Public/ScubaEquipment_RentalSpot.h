#pragma once
#include "CoreMinimal.h"
#include "RentalSpot.h"
#include "ScubaEquipment_RentalSpot.generated.h"

class AWaterVehicle;

UCLASS(Blueprintable)
class GSS2_API AScubaEquipment_RentalSpot : public ARentalSpot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AWaterVehicle> Dead_ScubaIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AWaterVehicle> Default_ScubaIndicator;
    
    AScubaEquipment_RentalSpot(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnCustomerGotBack(AWaterVehicle* Boat);
    
};

