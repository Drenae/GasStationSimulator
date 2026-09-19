#pragma once
#include "CoreMinimal.h"
#include "CustomerArrivedDelegate.h"
#include "CustomerServedDelegate.h"
#include "EBuildingPathStationState.h"
#include "PlaceableActor.h"
#include "InteractableBuilding.generated.h"

class AActor;
class ARuins;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API AInteractableBuilding : public APlaceableActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARuins*> Ruins;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomerArrived OnCustomerArrived;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomerServed OnCustomerServed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildingPathStationState BuildingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowClosedStationMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBuildingOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ClosedStationMesh;
    
    AInteractableBuilding(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpecialOpenCloseEvent();
    
    UFUNCTION(BlueprintCallable)
    void OpenCloseBuilding(EBuildingPathStationState NewState, uint8 PathStationIndex);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsBuildingOpen();
    
    UFUNCTION(BlueprintCallable)
    void DestroyRuin(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    bool CanBeUnblocked();
    
};

