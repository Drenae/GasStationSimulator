#include "SignificanceStaticMeshActorBase.h"

ASignificanceStaticMeshActorBase::ASignificanceStaticMeshActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->bDistanceOptimizationEnabled = false;
    this->SignificanceCalculationsTag = TEXT("SignificanceActorBase");
    this->bDisableTickWhenNotRendered = false;
    this->MaxTickDisableSignificanceLevel = 0;
    this->bOverridePriorityWhenNotRendered = false;
    this->NotRenderedOverridePriorityLevel = 0;
    this->bOverrideDefaultSignificanceLevels = false;
}


