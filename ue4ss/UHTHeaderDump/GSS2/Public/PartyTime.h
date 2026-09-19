#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "PartyTime.generated.h"

class APartyLightsToggle;

UCLASS(Blueprintable)
class GSS2_API APartyTime : public AInteractableBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APartyLightsToggle* PartyLightsToggle;
    
    APartyTime(const FObjectInitializer& ObjectInitializer);

};

