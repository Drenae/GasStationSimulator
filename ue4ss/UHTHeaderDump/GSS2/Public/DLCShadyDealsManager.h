#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DLCShadyDealsManager.generated.h"

class AItem;
class USDGameplayEvents;
class USDShadynessManager;
class USDSheriffBehaviorDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API UDLCShadyDealsManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AItem>> LockedProducts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USDSheriffBehaviorDataAsset* SheriffBehaviourSettingsDataAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USDShadynessManager* ShadynessManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USDGameplayEvents* GameplayEvents;
    
public:
    UDLCShadyDealsManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnlockAllProducts();
    
    UFUNCTION(BlueprintCallable)
    void SetProductLocked(TSoftClassPtr<AItem> InProduct, bool bLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProductLocked(TSoftClassPtr<AItem> Product) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USDSheriffBehaviorDataAsset* GetSheriffBehaviourDataAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USDShadynessManager* GetShadynessManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftClassPtr<AItem>> GetLockedProducts() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USDGameplayEvents* GetGameplayEvents() const;
    
};

