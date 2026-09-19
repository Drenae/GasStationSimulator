#include "WashableCamperMesh.h"

AWashableCamperMesh::AWashableCamperMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseCachedMainMaterialOnStartWashing = true;
    this->DesiredStainsAmount = 0;
}


