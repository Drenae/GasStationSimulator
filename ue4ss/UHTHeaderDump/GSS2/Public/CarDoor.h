#pragma once
#include "CoreMinimal.h"
#include "EDoorSide.h"
#include "VehiclePart.h"
#include "CarDoor.generated.h"

UCLASS(Blueprintable)
class GSS2_API ACarDoor : public AVehiclePart {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDoorSide DoorSide;
    
public:
    ACarDoor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDoorSide GetDoorSide();
    
};

