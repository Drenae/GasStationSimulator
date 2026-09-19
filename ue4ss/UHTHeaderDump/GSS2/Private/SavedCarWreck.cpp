#include "SavedCarWreck.h"

FSavedCarWreck::FSavedCarWreck() {
    this->WreckState = ECarWreckState::FREE;
    this->bAssemblyMode = false;
    this->bRusty = false;
    this->SavedIsPutOnSale = false;
    this->CurrentMarking = ECarWreckMarking::NONE;
    this->SavedTier = EJunkyardPartRarity::FAKE;
    this->bProjectCreatedEffectShown = false;
    this->bProjectFinishedEffectShown = false;
    this->bShowEffectOnProjectFinished = false;
    this->bTmpMagnetAttractionDisabled = false;
}

