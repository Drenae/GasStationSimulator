#include "Infinite_Compound.h"

UInfinite_Compound::UInfinite_Compound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->RealTime = true;
    this->TimeJump = 10000.00f;
    this->InfinityCategory = EInfinityCategory::InfiniteOcean;
}


