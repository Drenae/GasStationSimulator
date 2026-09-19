#include "BackMask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CollectibleItems -ObjectName=CollectiblesInventoryComponent -FallbackName=CollectiblesInventoryComponent
#include "InventoryComponent.h"

ABackMask::ABackMask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LockDifficulty = 0;
    this->AvailableLockPicks = 0;
    this->ItemInventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("ItemInventory"));
    this->CollectiblesItemsInventory = CreateDefaultSubobject<UCollectiblesInventoryComponent>(TEXT("CollectiblesItemInventory"));
    this->bWasInteraction = false;
    this->HardLevel = 25.00f;
}

void ABackMask::SetLockDifficulty(int32 InLockDifficulty) {
}

void ABackMask::SetAvailableLockPicks(int32 InAvailableLockPicks) {
}

int32 ABackMask::GetLockDifficulty() {
    return 0;
}

int32 ABackMask::GetAvailableLockPicks() {
    return 0;
}

void ABackMask::AwardProduct(float ChanceToGet, const int32 MaxAmount, int32 MaxCategory, TArray<TSoftClassPtr<AItem>>& ItemClass, TArray<int32>& OutAmount) {
}

void ABackMask::AwardMoney(float ChanceToGet, float MinMoney, float MaxMoney, float& OutMoney) {
}

void ABackMask::AwardDecoration(float ChanceToGet, const int32 MaxAmount, int32 MaxCategory, TArray<TSoftClassPtr<AItem>>& ItemClass, TArray<int32>& OutAmount) {
}



