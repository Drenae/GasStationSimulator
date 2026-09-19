#include "SavedAirplane.h"

FSavedAirplane::FSavedAirplane() {
    this->TimeToTakeOff = 0;
    this->bCanInteract = false;
    this->TotalPilotTradeValue = 0.00f;
    this->TotalPlayerTradeValue = 0.00f;
    this->ImpatienceMeter = 0.00f;
    this->LastPlayerTradeValue = 0.00f;
    this->LastPilotTradeValue = 0.00f;
    this->SavedIsSameOffer = false;
    this->SavedAffectedByTradingBoost = ETradingBoosts::HOT_STUFF;
    this->SavedTradeTryTut = 0;
    this->bIsUnamount = false;
}

