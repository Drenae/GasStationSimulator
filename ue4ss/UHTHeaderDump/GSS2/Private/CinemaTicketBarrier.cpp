#include "CinemaTicketBarrier.h"

ACinemaTicketBarrier::ACinemaTicketBarrier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bBarrierOpen = true;
    this->bAccessTicketsOnly = true;
    this->bAutomaticValidation = false;
}



