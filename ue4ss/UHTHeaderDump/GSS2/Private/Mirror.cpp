#include "Mirror.h"

AMirror::AMirror(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MirrorSide = EMirrorSide::RIGHT;
}

EMirrorSide AMirror::GetMirrorSide() {
    return EMirrorSide::LEFT;
}


