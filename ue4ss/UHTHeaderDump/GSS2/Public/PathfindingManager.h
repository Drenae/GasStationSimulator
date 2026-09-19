#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PathfindingManager.generated.h"

class AGSSWheeledVehicle;
class APathPoint;

UCLASS(Blueprintable)
class GSS2_API APathfindingManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APathPoint*> PathPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APathPoint*> SpawnPathPoints;
    
    APathfindingManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetNodes(TArray<APathPoint*> ClosedNodes);
    
    UFUNCTION(BlueprintCallable)
    void GenerateNavLinks();
    
    UFUNCTION(BlueprintCallable)
    TArray<APathPoint*> FindPath(APathPoint* StartPoint, APathPoint* EndPoint, AGSSWheeledVehicle* GSSVehicle);
    
};

