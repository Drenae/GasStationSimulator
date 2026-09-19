#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "InteractableChalkboard.generated.h"

class AEquipmentRentalBuilding;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API AInteractableChalkboard : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MainMesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AEquipmentRentalBuilding> RentalBuilding;
    
public:
    AInteractableChalkboard(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<AEquipmentRentalBuilding> GetRentalBuilding();
    
};

