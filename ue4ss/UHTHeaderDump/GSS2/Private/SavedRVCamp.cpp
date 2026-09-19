#include "SavedRVCamp.h"

FSavedRVCamp::FSavedRVCamp() {
    this->SavedEventCooldown = 0;
    this->TotalTrustPoints = 0;
    this->CurrentTrustPoints = 0;
    this->CurrentBookingView = ERVBookingView::BOOKING;
    this->bWasBookingToolInitiated = false;
    this->bIsAutoCheckoutEnabled = false;
    this->bSkipDismissPopup = false;
    this->bSkipConcertCancelPopup = false;
    this->CurrentBookingLevel = 0;
    this->bCanEverSpawnCustomerForService = false;
    this->bCanGuestsGainRelax = false;
    this->bIsUnpaid = false;
    this->bCanGenerateNewCustomers = false;
    this->bCanAutorefreshcustomers = false;
}

