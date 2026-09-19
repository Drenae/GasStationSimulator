#include "CommonActivatableWidgetContainerBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "Templates/SubclassOf.h"

UCommonActivatableWidgetContainerBase::UCommonActivatableWidgetContainerBase() {
    this->Visibility = ESlateVisibility::Collapsed;
    this->TransitionType = ECommonSwitcherTransition::FadeOnly;
    this->TransitionCurveType = ETransitionCurve::Linear;
    this->TransitionDuration = 0.40f;
    this->DisplayedWidget = NULL;
}

void UCommonActivatableWidgetContainerBase::RemoveWidget(UCommonActivatableWidget* WidgetToRemove) {
}

UCommonActivatableWidget* UCommonActivatableWidgetContainerBase::GetActiveWidget() const {
    return NULL;
}

void UCommonActivatableWidgetContainerBase::ClearWidgets() {
}

UCommonActivatableWidget* UCommonActivatableWidgetContainerBase::BP_AddWidget(TSubclassOf<UCommonActivatableWidget> ActivatableWidgetClass) {
    return NULL;
}


