#include "ProInstanceToolsScatter.h"

AProInstanceToolsScatter::AProInstanceToolsScatter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumInstances = 10;
    this->PlacementType = ScatterPlacementType_Box;
    this->BoxPivotPoint = ScatterBoxPivotPoint_AtCenter;
    this->SphereRadius = 200.00f;
}


