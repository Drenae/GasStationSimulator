#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "FuelMinigameWidget.generated.h"

class AGSSWheeledVehicle;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GSS2_API UFuelMinigameWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSWheeledVehicle* Vehicle;
    
    UFuelMinigameWidget();

};

