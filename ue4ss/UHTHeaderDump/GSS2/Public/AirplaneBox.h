#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "SupBox.h"
#include "AirplaneBox.generated.h"

class UChildActorComponent;
class UInventoryComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class GSS2_API AAirplaneBox : public ASupBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* Box;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* AirplaneInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UStaticMesh>> BoxMeshes;
    
    AAirplaneBox(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateBox();
    
    UFUNCTION(BlueprintCallable)
    void RefreshInventory(UInventoryComponent* NewAirplaneInventory);
    
    UFUNCTION(BlueprintCallable)
    void OnAirplaneInventoryUpdated(const UInventoryComponent* Inventory);
    
    UFUNCTION(BlueprintCallable)
    void OnAirplaneBoxLoaded(FTransform Transform, TSoftObjectPtr<UStaticMesh> BoxMesh);
    
};

