#include "WatchedMovieResult.h"

FWatchedMovieResult::FWatchedMovieResult() {
    this->TicketIncome = 0.00f;
    this->PopcornIncome = 0.00f;
    this->PopcornRefill = 0.00f;
    this->RenownGainedTickets = 0.00f;
    this->RenownGainedPopcorn = 0.00f;
    this->RenownLost = 0.00f;
    this->RoyaltyFee = 0.00f;
    this->CorrectTickets = 0;
    this->WrongTickets = 0;
    this->UnvalidatedTickets = 0;
    this->RejectedCustomersCorrectly = 0;
    this->RejectedCustomersWrongly = 0;
    this->MovieIndex = 0;
}

