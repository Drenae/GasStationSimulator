#include "RvMinigameStageInfo.h"

FRvMinigameStageInfo::FRvMinigameStageInfo() {
    this->Stage = ERVMinigameStage::INACTIVE;
    this->TimeLeft = 0.00f;
    this->TimeElapsed = 0.00f;
    this->CompletionPercent = 0.00f;
}

