#include "LotteryMachine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetComponent -FallbackName=WidgetComponent

ALotteryMachine::ALotteryMachine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LotteryState = eLotteryState::READY;
    this->LotteryPreset = 0;
    this->CurrentEarnings = 0.00f;
    this->CurrentTimeInSeconds = 0;
    this->CurrentNameIndex = 0;
    this->HappyAngryMultiplier = 1.00f;
    this->LotteryWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("LotteryWidget"));
    this->LotteryWidget->SetupAttachment(RootComponent);
}

void ALotteryMachine::SetLotteryParameters(FLotteryPredefinedSettings SettingsToSet, bool bIsUpdateAfterLoad) {
}

void ALotteryMachine::FinishLottery() {
}

void ALotteryMachine::CreateNotification(bool bShow) {
}

void ALotteryMachine::CheckOpenedSection(FName MapName) {
}

void ALotteryMachine::CancelLottery() {
}

bool ALotteryMachine::BuyTicket() {
    return false;
}


