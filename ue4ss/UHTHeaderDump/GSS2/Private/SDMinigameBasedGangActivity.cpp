#include "SDMinigameBasedGangActivity.h"

USDMinigameBasedGangActivity::USDMinigameBasedGangActivity() {
    this->ActivityMinigameObj = NULL;
    this->DesiredMinigameClass = NULL;
}

void USDMinigameBasedGangActivity::OnVehicleClassLoaded(TSoftClassPtr<AGSSWheeledVehicle> LoadedActivityClass) {
}

void USDMinigameBasedGangActivity::OnActivityMinigameEnded(ASDMinigameBase* minigame, ESDMinigameEndReason EndReason) {
}

ASDShadyDealsMinigameBase* USDMinigameBasedGangActivity::GetActivityMinigame() const {
    return NULL;
}


