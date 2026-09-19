#include "BugReportingComponent.h"

UBugReportingComponent::UBugReportingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ContextPriority = 5;
    this->BugreportingWidgetClass = NULL;
    this->CreatedWidget = NULL;
}

void UBugReportingComponent::ToggleBugreportingWidget() {
}




