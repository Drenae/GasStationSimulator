#include "LuminAROrigin.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MRMesh -ObjectName=MRMeshComponent -FallbackName=MRMeshComponent

ALuminAROrigin::ALuminAROrigin(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UMRMeshComponent>(TEXT("MRMesh"));
    this->MRMeshComponent = (UMRMeshComponent*)RootComponent;
}


