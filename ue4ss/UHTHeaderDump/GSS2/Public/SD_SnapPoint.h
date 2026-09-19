#pragma once
#include "CoreMinimal.h"
#include "SnapPoint.h"
#include "SD_SnapPoint.generated.h"

class AInteractableBuilding;

UCLASS(Blueprintable)
class GSS2_API ASD_SnapPoint : public ASnapPoint {
    GENERATED_BODY()
public:
    ASD_SnapPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SnapToActor(AInteractableBuilding* NewInteractableBuilding);
    
};

