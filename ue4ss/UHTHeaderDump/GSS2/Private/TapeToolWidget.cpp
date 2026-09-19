#include "TapeToolWidget.h"

UTapeToolWidget::UTapeToolWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->OwningTapeTool = NULL;
}


void UTapeToolWidget::InitializeWidget_Implementation(ATapeTool* _OwningTapeTool) {
}


