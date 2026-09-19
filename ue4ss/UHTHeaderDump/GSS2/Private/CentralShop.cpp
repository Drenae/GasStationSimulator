#include "CentralShop.h"

ACentralShop::ACentralShop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StationFloorMaterial = NULL;
    this->ToiletFloorMaterial = NULL;
    this->RoofLevelName = TEXT("Roof_GableWood_Level_1");
    this->RoofLevelToUnload = TEXT("Roof_GableWood_Level_1");
}

FCleanRange ACentralShop::GetDirtyCleanStruct() {
    return FCleanRange{};
}


