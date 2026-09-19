#include "Volcano.h"

AVolcano::AVolcano(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Anger = EChunchumanchuAnger::HAPPY;
    this->bErupting = false;
    this->CurrentEruptionTime = 0.00f;
}



