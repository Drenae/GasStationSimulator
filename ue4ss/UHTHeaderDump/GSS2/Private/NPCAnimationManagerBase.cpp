#include "NPCAnimationManagerBase.h"

UNPCAnimationManagerBase::UNPCAnimationManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void UNPCAnimationManagerBase::PlayMontageGSS(UAnimMontage* AnimMontage, const float PlayRate, const float StartPosition, const FName StartingSection, FTransform TransA, FTransform TransB, const float NoMontageTime, const float ExtraTime, TEnumAsByte<EMontageStatus::Type> MontageStatus, FLatentActionInfo LatentInfo) {
}


void UNPCAnimationManagerBase::GSSDelay(UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo) {
}

float UNPCAnimationManagerBase::GetMontageLenght(const float NoMontageTime, const float ExtraTime) {
    return 0.0f;
}

UAnimInstance* UNPCAnimationManagerBase::GetAnimInstance() {
    return NULL;
}



