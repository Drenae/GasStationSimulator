#include "ProInstanceToolsPath.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

AProInstanceToolsPath::AProInstanceToolsPath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->PlacementType = PathPlacementType_Distance;
    this->Spacing = 100.00f;
    this->MaxInstances = 250;
    this->bUseInstanceLength = true;
    this->bFollowSplineRotation = true;
    this->bClosedSpline = false;
    this->CurrentDistance = 0.00f;
    this->CurrentInstanceLength = 0.00f;
    this->SplineComponent->SetupAttachment(RootComponent);
}


