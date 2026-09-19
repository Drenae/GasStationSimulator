#include "SavedPickedDecal.h"

FSavedPickedDecal::FSavedPickedDecal() {
    this->PickedCategoryButtons = EDecalUnlockType::All;
    this->PickedDecal = NULL;
    this->DecalUnlockType = EDecalUnlockType::All;
    this->ArtisticOrGeneric = EDecalColor::Generic;
    this->IsInShop = false;
}

