#include "RootMotionMovementLibrary.h"

URootMotionMovementLibrary::URootMotionMovementLibrary() {
}

FTransform URootMotionMovementLibrary::GetRootMotionTransform(USkeletalMeshComponent* SkeletalMeshComponent, bool& bIsPlayingRootMotion) {
    return FTransform{};
}


