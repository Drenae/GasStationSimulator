#ifndef UE4SS_SDK_EasyFileDialog_HPP
#define UE4SS_SDK_EasyFileDialog_HPP

#include "EasyFileDialog_enums.hpp"

class UEFDFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool SaveFileDialog(FString DialogTitle, FString DefaultPath, FString DefaultFile, FString FileTypeDescription, FString FileType, TEnumAsByte<EEasyFileDialogFlags> Flags, TArray<FString>& OutFilenames);
    bool OpenFolderDialog(FString DialogTitle, FString DefaultPath, FString& OutFolderName);
    bool OpenFileDialog(FString DialogTitle, FString DefaultPath, FString DefaultFile, FString FileTypes, TEnumAsByte<EEasyFileDialogFlags> Flags, TArray<FString>& OutFilenames);
}; // Size: 0x28

class UEasyFileDialogBPLibrary : public UBlueprintFunctionLibrary
{

    float EasyFileDialogSampleFunction(float Param);
}; // Size: 0x28

#endif
