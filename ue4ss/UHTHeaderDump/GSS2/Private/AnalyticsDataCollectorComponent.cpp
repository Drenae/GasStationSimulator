#include "AnalyticsDataCollectorComponent.h"

UAnalyticsDataCollectorComponent::UAnalyticsDataCollectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QueueDataFrequency = 60;
    this->GoogleAnalyticsManagerSubsystem = NULL;
}

void UAnalyticsDataCollectorComponent::OnPlayerMoved(float Value) {
}


