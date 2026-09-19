#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "PaintGunStation.generated.h"

class UChildActorComponent;

UCLASS(Blueprintable)
class GSS2_API APaintGunStation : public AInteractableBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* PaintGun;
    
    APaintGunStation(const FObjectInitializer& ObjectInitializer);

};

