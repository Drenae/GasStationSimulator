#include "CountableObjectiveBase.h"

UCountableObjectiveBase::UCountableObjectiveBase() {
    this->CurrentProgress = 0;
    this->MaxProgress = 1;
    this->bFinishObjectiveWhenMaxProgressIsReached = true;
    this->DisplayType = ECountableObjectiveDisplayType::REGULAR;
}

void UCountableObjectiveBase::SetObjectiveProgress(int32 NewProgress, bool bShowUpdateAnim) {
}

void UCountableObjectiveBase::SetObjectiveMaxProgress(int32 NewMaxProgress) {
}

bool UCountableObjectiveBase::IsObjectiveProgressReached() {
    return false;
}

float UCountableObjectiveBase::GetObjectiveCompletionPercentage() {
    return 0.0f;
}

void UCountableObjectiveBase::AddObjectiveProgress(int32 AddedProgress, bool bShowUpdateAnim) {
}


