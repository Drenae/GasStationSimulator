#include "NPTaskFinishReason.h"

FNPTaskFinishReason::FNPTaskFinishReason() {
    this->TaskResult = ENPTaskResult::TaskSuccess;
    this->FinishReason = ENPTaskFinishReason::WorkEnd;
}

