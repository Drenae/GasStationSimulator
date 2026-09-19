#include "PostGameChallengesDataAsset.h"

UPostGameChallengesDataAsset::UPostGameChallengesDataAsset() {
    this->UseHighPopularityChallenges = false;
    this->HighPopularityLevelTreshold = 8;
    this->MinTimeBetweenPostGameChallenges = 5.00f;
    this->MaxTimeBetweenPostGameChallenges = 10.00f;
    this->TimeUntilFirstChallenge = 5.00f;
}


