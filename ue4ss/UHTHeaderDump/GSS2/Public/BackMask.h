#pragma once
#include "CoreMinimal.h"
#include "VehiclePart.h"
#include "BackMask.generated.h"

class AItem;
class UCollectiblesInventoryComponent;
class UInventoryComponent;

UCLASS(Blueprintable)
class GSS2_API ABackMask : public AVehiclePart {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LockDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AvailableLockPicks;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* ItemInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollectiblesInventoryComponent* CollectiblesItemsInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HardLevel;
    
    ABackMask(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLockDifficulty(int32 InLockDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void SetAvailableLockPicks(int32 InAvailableLockPicks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLockDifficulty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableLockPicks();
    
    UFUNCTION(BlueprintCallable)
    void AwardProduct(float ChanceToGet, const int32 MaxAmount, int32 MaxCategory, TArray<TSoftClassPtr<AItem>>& ItemClass, TArray<int32>& OutAmount);
    
    UFUNCTION(BlueprintCallable)
    void AwardMoney(float ChanceToGet, float MinMoney, float MaxMoney, float& OutMoney);
    
    UFUNCTION(BlueprintCallable)
    void AwardDecoration(float ChanceToGet, const int32 MaxAmount, int32 MaxCategory, TArray<TSoftClassPtr<AItem>>& ItemClass, TArray<int32>& OutAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AfterLoadSetSettings();
    
};

