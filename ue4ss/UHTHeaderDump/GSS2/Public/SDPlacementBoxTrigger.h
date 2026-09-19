#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "SDPlacementTriggerProductDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "SDPlacementBoxTrigger.generated.h"

class AActor;
class AProduct;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API USDPlacementBoxTrigger : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDPlacementTriggerProductDelegate ProductPlacedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDPlacementTriggerProductDelegate ProductOverlappedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDPlacementTriggerProductDelegate ProductRemovedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPlaceOverlappedProduct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowProductDetach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyAttachedProduct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AProduct>> AcceptableProducts;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AProduct* PlacedProduct;
    
public:
    USDPlacementBoxTrigger(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bInEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlaceOverlappedProduct(bool bAutoPlace);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowDetach(bool bAllowDetach);
    
    UFUNCTION(BlueprintCallable)
    void PlaceProduct(AProduct* InProduct, bool bForcePlace);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerPickedUp(const AActor* Actor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlacementBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AProduct* GetPlacedProduct() const;
    
    UFUNCTION(BlueprintCallable)
    AProduct* DetachProduct(bool bForceDetach);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool CanAcceptProduct(AProduct* InProduct) const;
    
};

