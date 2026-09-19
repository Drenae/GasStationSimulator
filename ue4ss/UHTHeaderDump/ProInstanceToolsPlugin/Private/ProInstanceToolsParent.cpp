#include "ProInstanceToolsParent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AProInstanceToolsParent::AProInstanceToolsParent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetUseOwnerRelevancy = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->Billboard = NULL;
    this->InstanceType = InstanceType_StaticMesh;
    this->bEnableCollision = true;
    this->OnOverlap = OnOverlap_Ignore;
    this->Index = 0;
    this->StartCullDistance = 0;
    this->EndCullDistance = 0;
    this->Seed = 0;
    this->bSurfaceSnapping = false;
    this->bSurfaceAligning = false;
    this->bIgnoreSelfCollision = false;
    this->LineTracingDepth = 500.00f;
}

void AProInstanceToolsParent::SetupInstances() {
}

void AProInstanceToolsParent::Randomize() {
}

void AProInstanceToolsParent::DestroyComponents() {
}

void AProInstanceToolsParent::CreateInstance(FTransform Transform, FProInstanceCurrentInstanceContainer Instance) {
}


