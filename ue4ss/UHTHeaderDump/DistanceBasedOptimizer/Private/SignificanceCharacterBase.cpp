#include "SignificanceCharacterBase.h"

ASignificanceCharacterBase::ASignificanceCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDistanceOptimizationEnabled = false;
    this->SignificanceCalculationsTag = TEXT("SignificanceCharacterBase");
    this->bDisableTickWhenNotRendered = false;
    this->MaxTickDisableSignificanceLevel = 0;
    this->bOverrideDefaultSignificanceLevels = false;
    this->bOverridePriorityWhenNotRendered = false;
    this->NotRenderedOverridePriorityLevel = 0;
}


