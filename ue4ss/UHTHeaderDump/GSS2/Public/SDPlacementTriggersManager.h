#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SDTriggerManagerConstProductDelegate.h"
#include "SDTriggerManagerProductDelegate.h"
#include "SDPlacementTriggersManager.generated.h"

class AProduct;
class USDPlacementBoxTrigger;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API USDPlacementTriggersManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDTriggerManagerProduct ProductPlacedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDTriggerManagerProduct ProductPrePlacedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDTriggerManagerConstProduct ProductTakenDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverlapAutoPlaceProduct;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTriggersByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USDPlacementBoxTrigger*> PlacementTriggers;
    
public:
    USDPlacementTriggersManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCanPickUpProducts(bool bCanPickUp);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnProductTaken(USDPlacementBoxTrigger* Trigger, AProduct* Product);
    
    UFUNCTION(BlueprintCallable)
    void OnProductPlaced(USDPlacementBoxTrigger* Trigger, AProduct* PlacedProduct);
    
    UFUNCTION(BlueprintCallable)
    void OnProductOverlapped(USDPlacementBoxTrigger* Trigger, AProduct* OverlappedProduct);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProductPlaced(const AProduct* InProduct, USDPlacementBoxTrigger*& FoundBoxTrigger) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<AProduct*> GetProducts() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USDPlacementBoxTrigger*> GetPlacementTriggers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USDPlacementBoxTrigger* GetEmptyPlacementBox() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool DoesContainProducts() const;
    
};

