#include "SignificanceActorBase.h"

ASignificanceActorBase::ASignificanceActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDistanceOptimizationEnabled = false;
    this->SignificanceCalculationsTag = TEXT("SignificanceActorBase");
    this->bDisableTickWhenNotRendered = false;
    this->MaxTickDisableSignificanceLevel = 0;
    this->bOverrideDefaultSignificanceLevels = false;
}


