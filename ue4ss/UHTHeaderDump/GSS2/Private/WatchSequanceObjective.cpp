#include "WatchSequanceObjective.h"

UWatchSequanceObjective::UWatchSequanceObjective() {
    this->SequenceToPlay = NULL;
    this->bHideUI = true;
    this->bSkipInDebug = false;
    this->bBlockPlayerInputs = false;
    this->bWaitForPlayerActive = false;
    this->SequencePlayer = NULL;
}

void UWatchSequanceObjective::TryStartSequance(UWorld* World) {
}


