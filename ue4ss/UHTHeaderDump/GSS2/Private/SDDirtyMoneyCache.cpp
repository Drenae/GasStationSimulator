#include "SDDirtyMoneyCache.h"

ASDDirtyMoneyCache::ASDDirtyMoneyCache(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bActive = true;
    this->bHasMoneyBag = false;
}

ASDMoneyBag* ASDDirtyMoneyCache::TakeOutBag() {
    return NULL;
}

void ASDDirtyMoneyCache::SetActive(bool bInActive) {
}

void ASDDirtyMoneyCache::PlaceMoneyBag(ASDMoneyBag* InBag) {
}

bool ASDDirtyMoneyCache::IsActive() const {
    return false;
}

void ASDDirtyMoneyCache::Init() {
}

bool ASDDirtyMoneyCache::HasMoneyBag() const {
    return false;
}

bool ASDDirtyMoneyCache::CanPlaceMoneyBag_Implementation() const {
    return false;
}


