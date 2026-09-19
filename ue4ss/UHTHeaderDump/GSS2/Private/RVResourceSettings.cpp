#include "RVResourceSettings.h"

URVResourceSettings::URVResourceSettings() {
    this->RefillResourcesCost = 100;
}

int32 URVResourceSettings::GetResourceRegenMinutesAtLevel(ERVResource Resource, int32 Level) {
    return 0;
}

FRVResourceProperties URVResourceSettings::GetResourceProperties(ERVResource Resource) {
    return FRVResourceProperties{};
}

int32 URVResourceSettings::GetMaxResourceReserveAtLevel(ERVResource Resource, int32 Level) {
    return 0;
}


