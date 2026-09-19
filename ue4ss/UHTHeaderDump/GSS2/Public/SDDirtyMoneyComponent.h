#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SDDirtyMoneyComponent.generated.h"

class AActor;
class ASDDirtyMoneyCache;
class ASDMoneyBag;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API USDDirtyMoneyComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASDMoneyBag*> DirtyMoneyBags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASDDirtyMoneyCache*> DirtyMoneyCaches;
    
public:
    USDDirtyMoneyComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RegisterDirtyMoneyCache(ASDDirtyMoneyCache* InCache);
    
    UFUNCTION(BlueprintCallable)
    void RegisterDirtyMoneyBag(ASDMoneyBag* InBag);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDirtyMoneyBagDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumOfFilledMoneyCaches(bool bCountInactive) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    float GetDirtyMoneyEquivalent(bool bCountInactive) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASDDirtyMoneyCache*> GetDirtyMoneyCaches() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASDMoneyBag*> GetDirtyMoneyBags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<ASDDirtyMoneyCache*> GetActiveMoneyCaches() const;
    
};

