#pragma once
#include "CoreMinimal.h"
#include "EWheelSide_FourWheel.h"
#include "VehiclePart.h"
#include "Wheel.generated.h"

UCLASS(Blueprintable)
class GSS2_API AWheel : public AVehiclePart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsScrewed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWheelSide_FourWheel WheelSide;
    
    AWheel(const FObjectInitializer& ObjectInitializer);

};

