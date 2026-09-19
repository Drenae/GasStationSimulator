#include "SavedChallenge.h"

FSavedChallenge::FSavedChallenge() {
    this->TimeUntilNextChallenge = 0.00f;
    this->TimeUntilCompletitionCheck = 0.00f;
    this->bIsTickEnabled = false;
}

