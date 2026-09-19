#include "DA_CinemaTickets.h"

UDA_CinemaTickets::UDA_CinemaTickets() {
    this->FakeTicketChance = 0.20f;
    this->UseGlobalFakeTitlesArrayChance = 0.50f;
    this->UseGlobalFakeImagesArrayChance = 0.50f;
    this->NoTicketChance = 0.25f;
    this->ValidatorStuckChance = 0.10f;
    this->MinStuckCountClicks = 1;
    this->MaxStuckCountClicks = 6;
    this->StuckProgressLossOverTime = 0.01f;
    this->ValidationMoney = 10;
    this->ValidateCorrectTicketRenown = 25;
    this->ValidateWrongTicketRenown = 25;
    this->RejectCorrectTicketRenown = -15;
    this->RejectFakeTicketRenown = 25;
    this->ValidationInteractionDistance = 150.00f;
}


