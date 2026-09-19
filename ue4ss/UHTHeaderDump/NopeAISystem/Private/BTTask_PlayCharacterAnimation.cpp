#include "BTTask_PlayCharacterAnimation.h"

UBTTask_PlayCharacterAnimation::UBTTask_PlayCharacterAnimation() {
    this->NodeName = TEXT("PlayCharacterAnimation");
    this->AnimMontage = NULL;
    this->PlayTaskMontage = true;
    this->MyOwnerComp = NULL;
}

void UBTTask_PlayCharacterAnimation::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}


