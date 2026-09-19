#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PathStation.generated.h"

class AGSSWheeledVehicle;
class APathPoint;

UCLASS(Blueprintable)
class GSS2_API APathStation : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APathPoint*> PathPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InteractableActorTagToCheck;
    
    APathStation(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static APathPoint* GetAvailablePathPoint(TArray<APathPoint*> NewPathPoints, AGSSWheeledVehicle* GSSWheeledVehicleClass);
    
};

