#include "PhoneNotificationWidget.h"

UPhoneNotificationWidget::UPhoneNotificationWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CallType = EPhoneCallType::NOT_SET;
    this->PhoneCallInfoDataAsset = NULL;
    this->bShowUncleShelfeAnimation = false;
    this->PhoneCall_IMG = NULL;
    this->PhoneCallDescription_TXT = NULL;
}

void UPhoneNotificationWidget::InitializeWidget_Implementation(EPhoneCallType PhoneCallType, bool _bShowUncleShelfeAnimation) {
}

void UPhoneNotificationWidget::FillWidgets(FPhoneCallInfo PhoneCallData) {
}

void UPhoneNotificationWidget::FillPhoneCallInfo(EPhoneCallType PhoneCallType) {
}


