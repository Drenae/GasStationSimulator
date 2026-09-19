#include "AirstripRandomDialoguesManager.h"

AAirstripRandomDialoguesManager::AAirstripRandomDialoguesManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsRandomCallsManagerActive = false;
    this->bIsJoeMuted = false;
    this->AmountOfLeftBlueprints = 18;
    this->AmountOfHappy = 50;
    this->AmountOfMoney = 350.00f;
    this->bTradeCompleted = false;
}

bool AAirstripRandomDialoguesManager::TradeWithJoe() {
    return false;
}

bool AAirstripRandomDialoguesManager::HasFreeSpaceInInventory() {
    return false;
}

void AAirstripRandomDialoguesManager::GenerateJoeOrder() {
}

void AAirstripRandomDialoguesManager::AddBlueprintToInventory(UInventoryComponent* InventoryComponent, TSoftClassPtr<AItem> Blueprint) {
}


