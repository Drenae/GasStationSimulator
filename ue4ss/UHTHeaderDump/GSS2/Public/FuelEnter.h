#pragma once
#include "CoreMinimal.h"
#include "VehiclePart.h"
#include "FuelEnter.generated.h"

class UFuelMinigameWidget;
class UInventoryComponent;

UCLASS(Blueprintable)
class GSS2_API AFuelEnter : public AVehiclePart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFuelMinigameWidget> FuelMinigameWidgetClass;
    
    AFuelEnter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowFuelEnter(bool On);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenFuelEnter(bool Condition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventoryComponent* GetVehicleInventory();
    
};

