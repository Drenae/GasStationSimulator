#include "SDSheriffActionBase.h"

USDSheriffActionBase::USDSheriffActionBase() {
}

FText USDSheriffActionBase::GetActionDescription_Implementation() const {
    return FText::GetEmpty();
}

void USDSheriffActionBase::Execute_Implementation(USDStandaloneSheriffTrigger* InSheriffTrigger) {
}


