#include "NewsfeedFunctionLibrary.h"

UNewsfeedFunctionLibrary::UNewsfeedFunctionLibrary() {
}

TArray<FDLCNews> UNewsfeedFunctionLibrary::GetDLCNewsFromJson(const FJsonObjectWrapper& JsonObjectWrapper, const EUsedPlatform UsedPlatform) {
    return TArray<FDLCNews>();
}

TArray<FChangelogNews> UNewsfeedFunctionLibrary::GetChangelogNewsFromJson(const FJsonObjectWrapper& JsonObjectWrapper, const EUsedPlatform UsedPlatform) {
    return TArray<FChangelogNews>();
}

FAdvertNews UNewsfeedFunctionLibrary::GetAdvertNewsFromJson(const FJsonObjectWrapper& JsonObjectWrapper, const EUsedPlatform UsedPlatform) {
    return FAdvertNews{};
}


