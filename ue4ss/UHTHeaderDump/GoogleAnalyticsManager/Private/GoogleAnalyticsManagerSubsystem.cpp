#include "GoogleAnalyticsManagerSubsystem.h"

UGoogleAnalyticsManagerSubsystem::UGoogleAnalyticsManagerSubsystem() {
    this->bInitialized = false;
}

void UGoogleAnalyticsManagerSubsystem::SendEventData(FJsonObjectWrapper JsonSerializedEventData, FJsonObjectWrapper JsonSerializedUserData, bool bAddEngagementTime) {
}

void UGoogleAnalyticsManagerSubsystem::ReportCustomEvent(const FString& EventName, TMap<FString, FString> UserParams, TMap<FString, FString> params, bool bAddEngagementTime) {
}

void UGoogleAnalyticsManagerSubsystem::QueueCustomEvent(const FString& EventName, TMap<FString, FString> params) {
}

TMap<FString, FString> UGoogleAnalyticsManagerSubsystem::MachineSpecsAsMap() {
    return TMap<FString, FString>();
}

FMachineSpec UGoogleAnalyticsManagerSubsystem::GatherMachineSpecData(ULocalPlayer* LP) {
    return FMachineSpec{};
}

void UGoogleAnalyticsManagerSubsystem::AddUserCustomDimension(const FString& Name, const FString& Value) {
}


