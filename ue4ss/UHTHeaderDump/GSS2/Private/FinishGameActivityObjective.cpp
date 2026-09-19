#include "FinishGameActivityObjective.h"

UFinishGameActivityObjective::UFinishGameActivityObjective() {
    this->GameActivityType = EGameActivityType::DIGGER;
}

void UFinishGameActivityObjective::FOnGameActivityFinished(EGameActivityType FinishedActivityType) {
}


