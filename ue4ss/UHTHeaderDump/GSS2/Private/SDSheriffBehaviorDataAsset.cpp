#include "SDSheriffBehaviorDataAsset.h"

USDSheriffBehaviorDataAsset::USDSheriffBehaviorDataAsset() {
    this->MinimalSheriffSpawnDelay = 10.00f;
}

FSDSheriffBehaviorSettings USDSheriffBehaviorDataAsset::GetBehaviourSettings(int32 InLevel) const {
    return FSDSheriffBehaviorSettings{};
}


