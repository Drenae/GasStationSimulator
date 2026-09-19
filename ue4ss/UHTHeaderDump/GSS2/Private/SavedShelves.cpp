#include "SavedShelves.h"

FSavedShelves::FSavedShelves() {
    this->Actor = NULL;
    this->bCanBeRestocked = false;
    this->bAutoRestock = false;
    this->ShelfRestockThreshold = 0.00f;
    this->CurrentRestockCapacity = 0.00f;
    this->IsShelfBeforeRestockUpdate = false;
}

