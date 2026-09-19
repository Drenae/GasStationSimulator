#include "GoogleAnalyticsManagerSettings.h"

UGoogleAnalyticsManagerSettings::UGoogleAnalyticsManagerSettings() {
    this->ApiSecret = TEXT("w6X75gB7RcuSkTGRlqkw0g");
    this->MeasurementID = TEXT("G-WV8QMQZHHB");
    this->SendEventsFrequency = 1200;
    this->CurrentGameUpdate = TEXT("GA Test");
    this->bSendEventsInPIE = false;
    this->bSendEventsAsInternal = false;
}


