#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "WaterVehicleFuelMiniGame.generated.h"

class AWaterVehicle;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UWaterVehicleFuelMiniGame : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWaterVehicle* Vehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomFuel;
    
    UWaterVehicleFuelMiniGame();

};

