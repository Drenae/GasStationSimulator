#include "EOSManagersHelperBPLibrary.h"

UEOSManagersHelperBPLibrary::UEOSManagersHelperBPLibrary() {
}

bool UEOSManagersHelperBPLibrary::JSONFileToStruct(const TArray<uint8>& FileContent, FJsonObjectWrapper& JsonObjectWrapper) {
    return false;
}

UTexture2D* UEOSManagersHelperBPLibrary::ImageFileToTexture2D(const TArray<uint8>& FileContent) {
    return NULL;
}

EUsedPlatform UEOSManagersHelperBPLibrary::GetUsedPlatformByName(FName PlatformName) {
    return EUsedPlatform::STEAM;
}


