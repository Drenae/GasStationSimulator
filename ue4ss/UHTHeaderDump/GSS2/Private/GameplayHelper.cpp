#include "GameplayHelper.h"
#include "Templates/SubclassOf.h"

UGameplayHelper::UGameplayHelper() {
}

int32 UGameplayHelper::GetItemAmountOnShelves(UObject* WorldContextObject, TSoftClassPtr<AItem> ItemSoft) {
    return 0;
}

int32 UGameplayHelper::GetAmountOfItemOnShelf(UObject* WorldContextObject, TSubclassOf<AProduct> ProductClass) {
    return 0;
}


