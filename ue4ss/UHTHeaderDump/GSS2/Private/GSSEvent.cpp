#include "GSSEvent.h"

UGSSEvent::UGSSEvent() {
    this->PlayerController = NULL;
    this->WorldPtr = NULL;
    this->TickEnabled = true;
}

bool UGSSEvent::UpdateEventProgress(FEventProgress NewEventProgress) {
    return false;
}


void UGSSEvent::SetTickEnabled(bool Enable) {
}

void UGSSEvent::SetEventProgress(FEventProgress EventProgress) {
}

void UGSSEvent::SetCurrenTime(FTimeStruct CurrentTime, FTimeStruct& OutCurrentTime) {
}

void UGSSEvent::LoadGameEvent_Implementation() {
}

void UGSSEvent::InitializeEventWorld_Implementation(UWorld* World, bool bEventEnabled) {
}

void UGSSEvent::InitializeEvent_Implementation(APlayerController* NewPlayerController, FGSSEventTime NewGSSEventTime) {
}

int32 UGSSEvent::GetEventProgress(const FString& ObjectiveName, int32& MaxProgress) {
    return 0;
}

FTimeStruct UGSSEvent::GetCurrenTime() {
    return FTimeStruct{};
}

void UGSSEvent::FinishEvent_Implementation() {
}

void UGSSEvent::ActivateEvent_Implementation(bool bEventEnabled) {
}


