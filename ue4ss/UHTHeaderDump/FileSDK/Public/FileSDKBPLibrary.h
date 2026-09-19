#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EFileSDKEncodingOptions.h"
#include "EFileSDKFileType.h"
#include "FileSDKCopyDelegateDelegate.h"
#include "FileSDKDelegatePreInfo.h"
#include "FileSDKFileInfo.h"
#include "FileSDKBPLibrary.generated.h"

class UFileSDKFileReader;

UCLASS(Blueprintable)
class UFileSDKBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFileSDKBPLibrary();

    UFUNCTION(BlueprintCallable)
    static bool WriteStringToFile(const FString& Filename, const FString& Content, bool Append, EFileSDKEncodingOptions Encoding);
    
    UFUNCTION(BlueprintCallable)
    static bool WriteBytesToFile(const FString& Filename, TArray<uint8> Content);
    
    UFUNCTION(BlueprintCallable)
    static bool RenameFileOrDirectory(const FString& Source, const FString& Destination);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ReadStringFromFile(const FString& Filename, FString& Content);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ReadBytesFromFile(const FString& Filename, TArray<uint8>& Content);
    
    UFUNCTION(BlueprintCallable)
    static UFileSDKFileReader* OpenFileReader(const FString& Filename, bool OpenInBinaryMode);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetFilesFromDirectory(const FString& DirectoryToSearch, const FString& FilterFilesWithExtension, bool SearchSubfolders, EFileSDKFileType FileType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetFileOrDirectoryInfo(const FString& Path, FFileSDKFileInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetEnvironmentVariable(const FString& VariableName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FFileSDKFileInfo> GetDirectoryContentsWithFileInfo(const FString& Directory, bool SearchSubfolders);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCurrentUsername();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCurrentUserHomeDirectory();
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteFile(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteDirectory(const FString& DirectoryName, bool Recursive);
    
    UFUNCTION(BlueprintCallable)
    static void CreateFile(const FString& Filename, bool ClearContentsIfExists, bool CreateDirectoryTree);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateDirectory(const FString& DirectoryName, bool CreateDirectoryTree);
    
    UFUNCTION(BlueprintCallable)
    static void CopyFileAsync(const FString& Source, const FString& Destination, const FFileSDKCopyDelegate& ProgressCallback, FFileSDKDelegatePreInfo PreInfo, int32 ChunkSizeInKilobytes);
    
    UFUNCTION(BlueprintCallable)
    static bool CopyFile(const FString& Source, const FString& Destination, const FFileSDKCopyDelegate& ProgressCallback, FFileSDKDelegatePreInfo PreInfo, int32 ChunkSizeInKilobytes);
    
    UFUNCTION(BlueprintCallable)
    static void CopyDirectoryAsync(const FString& Source, const FString& Destination, const FFileSDKCopyDelegate& ProgressCallback, bool OverwriteDestination, int32 ChunkSizeInKilobytes);
    
    UFUNCTION(BlueprintCallable)
    static bool CopyDirectory(const FString& Source, const FString& Destination, const FFileSDKCopyDelegate& ProgressCallback, bool OverwriteDestination, int32 ChunkSizeInKilobytes);
    
};

