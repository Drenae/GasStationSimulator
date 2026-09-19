#include "HammerWidget.h"

UHammerWidget::UHammerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->HammerInstence = NULL;
    this->QueueInfo = NULL;
    this->BuildInfo = NULL;
    this->LastSelectedInfo = NULL;
    this->Price_TXT = NULL;
    this->BuildingName_TXT = NULL;
    this->LastQueuePointNotificationText = NULL;
    this->Building_IMG = NULL;
    this->QuickAccesPartEnabled = false;
}

void UHammerWidget::ShowLastSelectedInfo() {
}

void UHammerWidget::ChangeInfoSegment(EStructureType StructureType, EHammerEditType ItemType) {
}


