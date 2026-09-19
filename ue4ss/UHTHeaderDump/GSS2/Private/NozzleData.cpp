#include "NozzleData.h"

UNozzleData::UNozzleData() {
    this->NumberOfTraces = 0;
    this->TraceOffset = 0.00f;
    this->WashingStrength = 0.00f;
    this->VFXSpread = false;
    this->NozzleMesh = NULL;
    this->NozzleStartSound = NULL;
    this->NozzleLoopSound = NULL;
    this->NozzleEndSound = NULL;
}


