#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "JoeAirplaneTEST.generated.h"

class AVehiclePart;
class UInventoryComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API AJoeAirplaneTEST : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MainMeshComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVehiclePart*> VehiclesParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* ItemInventory;
    
    AJoeAirplaneTEST(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UStaticMeshComponent* GetMesh();
    
};

