#include "SavedTrashItems.h"

FSavedTrashItems::FSavedTrashItems() {
    this->Actor = NULL;
    this->CollisionEnabledType = ECollisionEnabled::NoCollision;
    this->SavedObjectType = ECC_WorldStatic;
}

