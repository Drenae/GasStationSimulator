#include "BlueprintFileUtilsBPLibrary.h"

UBlueprintFileUtilsBPLibrary::UBlueprintFileUtilsBPLibrary() {
}

bool UBlueprintFileUtilsBPLibrary::MoveFile(const FString& DestFilename, const FString& SrcFilename, bool bReplace, bool bEvenIfReadOnly) {
    return false;
}

bool UBlueprintFileUtilsBPLibrary::MakeDirectory(const FString& Path, bool bCreateTree) {
    return false;
}

FString UBlueprintFileUtilsBPLibrary::GetUserDirectory() {
    return TEXT("");
}

bool UBlueprintFileUtilsBPLibrary::FindRecursive(const FString& StartDirectory, TArray<FString>& FoundPaths, const FString& Wildcard, bool bFindFiles, bool bFindDirectories) {
    return false;
}

bool UBlueprintFileUtilsBPLibrary::FindFiles(const FString& Directory, TArray<FString>& FoundFiles, const FString& FileExtension) {
    return false;
}

bool UBlueprintFileUtilsBPLibrary::FileExists(const FString& Filename) {
    return false;
}

bool UBlueprintFileUtilsBPLibrary::DirectoryExists(const FString& Directory) {
    return false;
}

bool UBlueprintFileUtilsBPLibrary::DeleteFile(const FString& Filename, bool bMustExist, bool bEvenIfReadOnly) {
    return false;
}

bool UBlueprintFileUtilsBPLibrary::DeleteDirectory(const FString& Directory, bool bMustExist, bool bDeleteRecursively) {
    return false;
}

bool UBlueprintFileUtilsBPLibrary::CopyFile(const FString& DestFilename, const FString& SrcFilename, bool bReplace, bool bEvenIfReadOnly) {
    return false;
}


