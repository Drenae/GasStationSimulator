#include "RVChallenge_CompleteGuestService.h"
#include "ERVChallengeTarget.h"

URVChallenge_CompleteGuestService::URVChallenge_CompleteGuestService() {
    this->ChallengeTarget = ERVChallengeTarget::ECT_DifferentGuestServicePerformed;
    this->Amount = 0;
}

void URVChallenge_CompleteGuestService::TrackCompletedServices(FGameplayTag ServiceTag) {
}


