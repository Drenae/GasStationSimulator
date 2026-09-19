#include "SDGangActivitySettings.h"

FSDGangActivitySettings::FSDGangActivitySettings() {
    this->bImmuneToShadyDealsLock = false;
    this->bEnabledByDefault = false;
    this->bManualStartOnly = false;
    this->BaseActivityCooldown = 0.00f;
    this->EmailNotificationTimeOffset = 0.00f;
}

