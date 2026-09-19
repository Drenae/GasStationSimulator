#include "FileSDKBPLibrary.h"

UFileSDKBPLibrary::UFileSDKBPLibrary() {
}

bool UFileSDKBPLibrary::WriteStringToFile(const FString& Filename, const FString& Content, bool Append, EFileSDKEncodingOptions Encoding) {
    return false;
}

bool UFileSDKBPLibrary::WriteBytesToFile(const FString& Filename, TArray<uint8> Content) {
    return false;
}

bool UFileSDKBPLibrary::RenameFileOrDirectory(const FString& Source, const FString& Destination) {
    return false;
}

bool UFileSDKBPLibrary::ReadStringFromFile(const FString& Filename, FString& Content) {
    return false;
}

bool UFileSDKBPLibrary::ReadBytesFromFile(const FString& Filename, TArray<uint8>& Content) {
    return false;
}

UFileSDKFileReader* UFileSDKBPLibrary::OpenFileReader(const FString& Filename, bool OpenInBinaryMode) {
    return NULL;
}

TArray<FString> UFileSDKBPLibrary::GetFilesFromDirectory(const FString& DirectoryToSearch, const FString& FilterFilesWithExtension, bool SearchSubfolders, EFileSDKFileType FileType) {
    return TArray<FString>();
}

void UFileSDKBPLibrary::GetFileOrDirectoryInfo(const FString& Path, FFileSDKFileInfo& Info) {
}

FString UFileSDKBPLibrary::GetEnvironmentVariable(const FString& VariableName) {
    return TEXT("");
}

TArray<FFileSDKFileInfo> UFileSDKBPLibrary::GetDirectoryContentsWithFileInfo(const FString& Directory, bool SearchSubfolders) {
    return TArray<FFileSDKFileInfo>();
}

FString UFileSDKBPLibrary::GetCurrentUsername() {
    return TEXT("");
}

FString UFileSDKBPLibrary::GetCurrentUserHomeDirectory() {
    return TEXT("");
}

bool UFileSDKBPLibrary::DeleteFile(const FString& Filename) {
    return false;
}

bool UFileSDKBPLibrary::DeleteDirectory(const FString& DirectoryName, bool Recursive) {
    return false;
}

void UFileSDKBPLibrary::CreateFile(const FString& Filename, bool ClearContentsIfExists, bool CreateDirectoryTree) {
}

bool UFileSDKBPLibrary::CreateDirectory(const FString& DirectoryName, bool CreateDirectoryTree) {
    return false;
}

void UFileSDKBPLibrary::CopyFileAsync(const FString& Source, const FString& Destination, const FFileSDKCopyDelegate& ProgressCallback, FFileSDKDelegatePreInfo PreInfo, int32 ChunkSizeInKilobytes) {
}

bool UFileSDKBPLibrary::CopyFile(const FString& Source, const FString& Destination, const FFileSDKCopyDelegate& ProgressCallback, FFileSDKDelegatePreInfo PreInfo, int32 ChunkSizeInKilobytes) {
    return false;
}

void UFileSDKBPLibrary::CopyDirectoryAsync(const FString& Source, const FString& Destination, const FFileSDKCopyDelegate& ProgressCallback, bool OverwriteDestination, int32 ChunkSizeInKilobytes) {
}

bool UFileSDKBPLibrary::CopyDirectory(const FString& Source, const FString& Destination, const FFileSDKCopyDelegate& ProgressCallback, bool OverwriteDestination, int32 ChunkSizeInKilobytes) {
    return false;
}


