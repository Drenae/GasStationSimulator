#pragma once
#include "CoreMinimal.h"
#include "InteractableActor.h"
#include "SDDirtyMoneyCache.generated.h"

class ASDMoneyBag;

UCLASS(Blueprintable)
class GSS2_API ASDDirtyMoneyCache : public AInteractableActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasMoneyBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASDMoneyBag> PlacedBagClass;
    
public:
    ASDDirtyMoneyCache(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    ASDMoneyBag* TakeOutBag();
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool bInActive);
    
    UFUNCTION(BlueprintCallable)
    void PlaceMoneyBag(ASDMoneyBag* InBag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void Init();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMoneyBag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanPlaceMoneyBag() const;
    
};

