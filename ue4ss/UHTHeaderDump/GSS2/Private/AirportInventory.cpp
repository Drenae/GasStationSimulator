#include "AirportInventory.h"
#include "Templates/SubclassOf.h"

UAirportInventory::UAirportInventory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

int32 UAirportInventory::AddAirplaneItem(TSubclassOf<AItem> ItemClass, int32 Quantity, bool IgnoreLimit) {
    return 0;
}


