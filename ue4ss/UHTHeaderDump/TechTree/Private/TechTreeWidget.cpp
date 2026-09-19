#include "TechTreeWidget.h"

UTechTreeWidget::UTechTreeWidget() {
    this->TechTree = NULL;
}

TArray<UTechNodeWidget*> UTechTreeWidget::GetTechNodeWidgets() {
    return TArray<UTechNodeWidget*>();
}

UTechNodeWidget* UTechTreeWidget::GetTechNode(UTechnologyAsset* TechnologyAsset) {
    return NULL;
}

TArray<UTechNodeArrowWidget*> UTechTreeWidget::GetArrowWidgets() {
    return TArray<UTechNodeArrowWidget*>();
}

void UTechTreeWidget::CustomRebuildWidget() {
}


