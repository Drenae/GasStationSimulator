#include "PhoneCallObjective.h"

UPhoneCallObjective::UPhoneCallObjective() {
    this->CallType = EPhoneCallType::PHONE_NOTIFICATION;
    this->PhoneCallInfoDataAsset = NULL;
    this->bShowUncleShelfeAnimation = false;
    this->CachedSoundWave = NULL;
    this->CashedCallWidget = NULL;
    this->bCanSpawnWidget = true;
}

void UPhoneCallObjective::StartRinging() {
}

void UPhoneCallObjective::CasheLoadedAssets(TSoftObjectPtr<USoundWave> SoundWaveSoft, TSoftClassPtr<UPhoneNotificationWidget> CallWidgetSoft) {
}


