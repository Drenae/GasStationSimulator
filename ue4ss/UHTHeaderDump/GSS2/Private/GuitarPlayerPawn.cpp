#include "GuitarPlayerPawn.h"

AGuitarPlayerPawn::AGuitarPlayerPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsAvailableForPosses = false;
    this->PosessionTransitionOn = false;
    this->OriginalCharacter = NULL;
}



