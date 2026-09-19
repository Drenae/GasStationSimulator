#include "EOSSettings.h"

UEOSSettings::UEOSSettings() {
    this->CacheDir = TEXT("CacheDir");
    this->DefaultArtifactName = TEXT("ba0ad8b38e5642fc8de85d2017a3d70b");
    this->TickBudgetInMilliseconds = 0;
    this->bEnableOverlay = true;
    this->bEnableSocialOverlay = true;
    this->bEnableEditorOverlay = false;
    this->bShouldEnforceBeingLaunchedByEGS = false;
    this->TitleStorageTags.AddDefaulted(5);
    this->TitleStorageReadChunkLength = 16384;
    this->Artifacts.AddDefaulted(5);
    this->bUseEAS = false;
    this->bUseEOSConnect = true;
    this->bMirrorStatsToEOS = false;
    this->bMirrorAchievementsToEOS = false;
    this->bUseEOSSessions = false;
    this->bMirrorPresenceToEAS = false;
}


