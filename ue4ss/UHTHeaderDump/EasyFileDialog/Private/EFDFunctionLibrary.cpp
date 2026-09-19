#include "EFDFunctionLibrary.h"

UEFDFunctionLibrary::UEFDFunctionLibrary() {
}

bool UEFDFunctionLibrary::SaveFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& DefaultFile, const FString& FileTypeDescription, const FString& FileType, TEnumAsByte<EEasyFileDialogFlags> Flags, TArray<FString>& OutFilenames) {
    return false;
}

bool UEFDFunctionLibrary::OpenFolderDialog(const FString& DialogTitle, const FString& DefaultPath, FString& OutFolderName) {
    return false;
}

bool UEFDFunctionLibrary::OpenFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& DefaultFile, const FString& FileTypes, TEnumAsByte<EEasyFileDialogFlags> Flags, TArray<FString>& OutFilenames) {
    return false;
}


