#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CollisionSaveStruct.h"
#include "EBuildingAreaType.h"
#include "EConstructType.h"
#include "ESnapType.h"
#include "InteractableActor.h"
#include "Placeable.h"
#include "PlaceableActor.generated.h"

class AActor;
class ACustomizationHousePart;
class ASnapPoint;
class UBoxComponent;

UCLASS(Blueprintable)
class GSS2_API APlaceableActor : public AInteractableActor, public IPlaceable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCompatibile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConstructionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EBuildingAreaType> CompatibileAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConstructType ConstructType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinLevelHouseToUnblock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SnapPointTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PlaceableBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PlacementCollisionBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PreviouslyOverlappingWalls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PreviouslyOverlappingPlaceableActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnapToGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SnappedToActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCollisionSaveStruct> ComponentsCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESnapType DecorationSnapType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSnapDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASnapPoint* CurrentSnapPoint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACustomizationHousePart* HittedHousePart;
    
public:
    APlaceableActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleSnappingToGrid();
    
    UFUNCTION(BlueprintCallable)
    void StartMovingActor();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SearchClosestCompatibileSnapPoint(FVector StartLocation);
    
    UFUNCTION(BlueprintCallable)
    void R_Action(bool bIsPressed);
    
public:
    UFUNCTION(BlueprintCallable)
    bool PlaceActor();
    
    UFUNCTION(BlueprintCallable)
    void OutLineOverlappingActors(TArray<AActor*> OverlappingActors, TArray<AActor*>& PreviouslyOverlappingActors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentGridRotationValue() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetAllCompatibileSpawnPoint();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnableGhostMode();
    
    UFUNCTION(BlueprintCallable)
    void ClearOutlinedActors(TArray<AActor*>& PreviouslyOverlappingActors);
    
    UFUNCTION(BlueprintCallable)
    void ChangeSnapRotationValue(bool bIncrease);
    
    UFUNCTION(BlueprintCallable)
    void ChangeSnapGridValue(bool bIncrease);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CanBeSpawned(const bool bCompatibile, const TArray<AActor*>& OverlapedElements, const FName& Reason);
    

    // Fix for true pure virtual functions not being implemented
};

