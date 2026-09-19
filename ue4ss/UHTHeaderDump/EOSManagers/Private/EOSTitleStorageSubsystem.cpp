#include "EOSTitleStorageSubsystem.h"

UEOSTitleStorageSubsystem::UEOSTitleStorageSubsystem() {
    this->CurrentReadNum = 0;
}

void UEOSTitleStorageSubsystem::ReadFile(const FString& Filename) {
}

bool UEOSTitleStorageSubsystem::IsEOSConnectionAvailable() const {
    return false;
}

EUsedPlatform UEOSTitleStorageSubsystem::GetUsedPlatform() const {
    return EUsedPlatform::STEAM;
}

void UEOSTitleStorageSubsystem::CacheFileByTags(const FString& TagName) {
}


