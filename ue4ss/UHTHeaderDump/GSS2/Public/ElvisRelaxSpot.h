#pragma once
#include "CoreMinimal.h"
#include "EBuildingType.h"
#include "InteractableBuilding.h"
#include "ElvisRelaxSpot.generated.h"

UCLASS(Blueprintable)
class GSS2_API AElvisRelaxSpot : public AInteractableBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildingType ElvisBuildingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GasStationLevel;
    
    AElvisRelaxSpot(const FObjectInitializer& ObjectInitializer);

};

