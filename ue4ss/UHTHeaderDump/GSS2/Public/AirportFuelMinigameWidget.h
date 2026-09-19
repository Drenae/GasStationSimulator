#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "AirportFuelMinigameWidget.generated.h"

class AAirplaneBase;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UAirportFuelMinigameWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAirplaneBase* Vehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomFuel;
    
    UAirportFuelMinigameWidget();

};

