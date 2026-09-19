#include "TapeTool.h"

ATapeTool::ATapeTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerInputComponent = NULL;
    this->InteractionRange = 500.00f;
    this->EdgeComponentTag = TEXT("AirPlaneHoleEdge");
    this->MaxTapeLength = 500.00f;
    this->CurrentTapeLength = 500.00f;
    this->bIsStrechingTape = false;
    this->LastKnownBrokenPart = NULL;
    this->CurrentlyFixedBrokenPart = NULL;
    this->FixingTapeInstance = NULL;
    this->bIsFirstStrech = false;
    this->SoundCue_Open = NULL;
    this->SoundCue_End = NULL;
    this->SoundCue_Strip = NULL;
    this->TapeToolWidgetInstance = NULL;
}

bool ATapeTool::WasTapeUsed() const {
    return false;
}

ABrokenPlanePart* ATapeTool::TraceForBrokenPlanePartOutHits(FHitResult& OutHit, bool& bInHitEdge) {
    return NULL;
}

ABrokenPlanePart* ATapeTool::TraceForBrokenPlanePart() {
    return NULL;
}

void ATapeTool::StretchTape() {
}

void ATapeTool::RemoveTapeToolWidget() {
}

void ATapeTool::FindBrokenPart() {
}


