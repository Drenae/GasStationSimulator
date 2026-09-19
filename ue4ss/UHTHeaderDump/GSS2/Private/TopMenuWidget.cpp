#include "TopMenuWidget.h"
#include "Net/UnrealNetwork.h"

UTopMenuWidget::UTopMenuWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->keySelected = 0;
    this->IndexRowSelected = 0;
}

void UTopMenuWidget::OnRep_IndexRowSelected() {
}

void UTopMenuWidget::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTopMenuWidget, IndexRowSelected);
}


