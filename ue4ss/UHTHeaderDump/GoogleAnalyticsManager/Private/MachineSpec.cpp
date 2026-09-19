#include "MachineSpec.h"

FMachineSpec::FMachineSpec() {
    this->NumberOfCores = 0;
    this->NumberOfThreads = 0;
    this->bHasDedicatedGraphics = false;
    this->VRAMGBs = 0;
    this->PhysicalMemoryGBs = 0;
    this->bIsValid = false;
}

