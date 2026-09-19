#include "GSSDeveloperSettings.h"

UGSSDeveloperSettings::UGSSDeveloperSettings() {
    this->bUseNewUI = false;
    this->VehicleDrivers.AddDefaulted(15);
    this->AccentConnector.AddDefaulted(15);
    this->bLoadTrashMeshesOnConstruction = true;
}


