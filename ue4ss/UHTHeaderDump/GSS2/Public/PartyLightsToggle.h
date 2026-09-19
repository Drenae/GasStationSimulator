#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "PartyLightsToggle.generated.h"

UCLASS(Blueprintable)
class GSS2_API APartyLightsToggle : public AInteractableBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAreLightsOn;
    
    APartyLightsToggle(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchLightsOnOff();
    
};

