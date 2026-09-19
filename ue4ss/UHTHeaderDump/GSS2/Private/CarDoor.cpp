#include "CarDoor.h"

ACarDoor::ACarDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DoorSide = EDoorSide::RIGHT;
}

EDoorSide ACarDoor::GetDoorSide() {
    return EDoorSide::LEFT;
}


