#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "Item.h"
#include "Product.generated.h"

class AActor;
class APawn;
class AProduct;
class UAudioComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class GSS2_API AProduct : public AItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ThrowSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* PickUpSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ImpactSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPickable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowInteraction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* bTmpPawn;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowMultiplier;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CashShopHoldZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CashShopScale;
    
public:
    AProduct(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StartTimerToDeactivatePhysics(float Seconds);
    
    UFUNCTION(BlueprintCallable)
    void StartTimerToActivateCollision(float Seconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetThrowStatus(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void SetNonPlayerThrowStatus(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void SetIsScanned(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowInteraction(bool bAllow);
    
private:
    UFUNCTION(BlueprintCallable)
    void PickUpProductInternal();
    
public:
    UFUNCTION(BlueprintCallable)
    void PickUpProduct(APawn* Pawn);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleLanding();
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetProductLanded();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsScanned();
    
    UFUNCTION(BlueprintCallable)
    FName GetInteractionName_Implementation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetInteractionName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCashShopScale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCashShopHoldZOffset();
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<AProduct*> GetAllThingsAroundObjects();
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetAllowInteraction();
    
    UFUNCTION(BlueprintCallable)
    void DestroySelfYolo();
    
private:
    UFUNCTION(BlueprintCallable)
    void DeactivatePhysicsOnTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    void DeactivateCollisionOnObjectForFewSeconds(float Seconds);
    
    UFUNCTION(BlueprintCallable)
    void BeginOverlapOnTrash(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void ActivatePhysicsOnObjectForFewSeconds(float Seconds);
    
private:
    UFUNCTION(BlueprintCallable)
    void ActivateCollisionOnTimer();
    
};

