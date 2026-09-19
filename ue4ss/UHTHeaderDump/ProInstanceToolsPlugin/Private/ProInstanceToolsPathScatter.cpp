#include "ProInstanceToolsPathScatter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

AProInstanceToolsPathScatter::AProInstanceToolsPathScatter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->NumInstances = 10;
    this->bUseSplineScale = true;
    this->bFollowSplineRotation = true;
    this->bClosedSpline = false;
    this->CurrentDistance = 0.00f;
    this->SplineComponent->SetupAttachment(RootComponent);
}


