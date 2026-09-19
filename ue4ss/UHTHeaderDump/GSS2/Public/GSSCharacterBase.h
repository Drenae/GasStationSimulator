#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DistanceBasedOptimizer -ObjectName=SignificanceCharacterBase -FallbackName=SignificanceCharacterBase
#include "HandleActorUpdateDelegate.h"
#include "Interaction.h"
#include "GSSCharacterBase.generated.h"

class AActor;
class UCollectiblesInventoryComponent;
class UInventoryComponent;

UCLASS(Abstract, Blueprintable)
class AGSSCharacterBase : public ASignificanceCharacterBase, public IInteraction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* ItemInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* HandleActorInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* AirplaneItemInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollectiblesInventoryComponent* CollectiblesItemsInventory;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHandleActorUpdate OnHandleActorUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* HandleActor;
    
public:
    AGSSCharacterBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void TriggerEvent(FName EventName);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetHandleActor(AActor* NewHandleActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetHandleActor();
    

    // Fix for true pure virtual functions not being implemented
};

