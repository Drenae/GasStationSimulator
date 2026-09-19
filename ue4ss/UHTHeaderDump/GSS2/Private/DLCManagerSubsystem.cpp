#include "DLCManagerSubsystem.h"

UDLCManagerSubsystem::UDLCManagerSubsystem() {
}

bool UDLCManagerSubsystem::IsDLCEnabled(EDLCName DLCName) const {
    return false;
}

TSet<EDLCName> UDLCManagerSubsystem::GetDeactivatedDLCs() const {
    return TSet<EDLCName>();
}

void UDLCManagerSubsystem::DeactivateDLCUsingString(const FString& DLCName) {
}

void UDLCManagerSubsystem::DeactivateDLC(EDLCName DLCName) {
}

void UDLCManagerSubsystem::ActivateDLCUsingString(const FString& DLCName) {
}

void UDLCManagerSubsystem::ActivateDLC(EDLCName DLCName) {
}


