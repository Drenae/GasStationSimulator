#include "ComputerMenuWidget.h"

UComputerMenuWidget::UComputerMenuWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsActive = false;
    this->AditionalkeySelected = 0;
}

void UComputerMenuWidget::OnRep_AditionalkeySelected() {
}

void UComputerMenuWidget::AditionalkeyChanged_Implementation() {
}


