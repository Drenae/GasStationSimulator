#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "SD_BarTable.generated.h"

class ASnapPoint;

UCLASS(Blueprintable)
class GSS2_API ASD_BarTable : public AInteractableBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASnapPoint*> SnapPoints;
    
    ASD_BarTable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ASnapPoint* FindClosestAvailableSnapPoint();
    
};

