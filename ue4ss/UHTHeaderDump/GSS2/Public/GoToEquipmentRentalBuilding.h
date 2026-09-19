#pragma once
#include "CoreMinimal.h"
#include "ECustomerType.h"
#include "IteractableActorTask.h"
#include "GoToEquipmentRentalBuilding.generated.h"

class AInteractableActor;
class ARentalSpot;

UCLASS(Blueprintable)
class GSS2_API UGoToEquipmentRentalBuilding : public UIteractableActorTask {
    GENERATED_BODY()
public:
    UGoToEquipmentRentalBuilding();

    UFUNCTION(BlueprintCallable)
    void SetBindings();
    
    UFUNCTION(BlueprintCallable)
    void OnRentalSpotAvailabe(AInteractableActor* Building, ARentalSpot* Spot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyFreeSpot();
    
    UFUNCTION(BlueprintCallable)
    AInteractableActor* AddAsCustomer(ECustomerType CustomerType);
    
};

