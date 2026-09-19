#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BlueprintFileUtilsBPLibrary.generated.h"

UCLASS(Blueprintable)
class UBlueprintFileUtilsBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlueprintFileUtilsBPLibrary();

    UFUNCTION(BlueprintCallable)
    static bool MoveFile(const FString& DestFilename, const FString& SrcFilename, bool bReplace, bool bEvenIfReadOnly);
    
    UFUNCTION(BlueprintCallable)
    static bool MakeDirectory(const FString& Path, bool bCreateTree);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetUserDirectory();
    
    UFUNCTION(BlueprintCallable)
    static bool FindRecursive(const FString& StartDirectory, TArray<FString>& FoundPaths, const FString& Wildcard, bool bFindFiles, bool bFindDirectories);
    
    UFUNCTION(BlueprintCallable)
    static bool FindFiles(const FString& Directory, TArray<FString>& FoundFiles, const FString& FileExtension);
    
    UFUNCTION(BlueprintCallable)
    static bool FileExists(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static bool DirectoryExists(const FString& Directory);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteFile(const FString& Filename, bool bMustExist, bool bEvenIfReadOnly);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteDirectory(const FString& Directory, bool bMustExist, bool bDeleteRecursively);
    
    UFUNCTION(BlueprintCallable)
    static bool CopyFile(const FString& DestFilename, const FString& SrcFilename, bool bReplace, bool bEvenIfReadOnly);
    
};

