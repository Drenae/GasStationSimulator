#pragma once
#include "CoreMinimal.h"
#include "ECustomerType.h"
#include "IteractableActorTask.h"
#include "RentEquipment.generated.h"

class AAICharacterBase;
class AInteractableActor;
class ARentalSpot;

UCLASS(Blueprintable)
class GSS2_API URentEquipment : public UIteractableActorTask {
    GENERATED_BODY()
public:
    URentEquipment();

    UFUNCTION(BlueprintCallable)
    void OnRentalEquipmentBroken(AInteractableActor* Building, ARentalSpot* Spot, AAICharacterBase* Customer);
    
    UFUNCTION(BlueprintCallable)
    void HandleCustomerService(ARentalSpot* Spot);
    
    UFUNCTION(BlueprintCallable)
    AInteractableActor* AddToSpot(ECustomerType CustomerType);
    
};

