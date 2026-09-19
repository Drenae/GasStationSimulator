#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EEasyFileDialogFlags.h"
#include "EFDFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class EASYFILEDIALOG_API UEFDFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEFDFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool SaveFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& DefaultFile, const FString& FileTypeDescription, const FString& FileType, TEnumAsByte<EEasyFileDialogFlags> Flags, TArray<FString>& OutFilenames);
    
    UFUNCTION(BlueprintCallable)
    static bool OpenFolderDialog(const FString& DialogTitle, const FString& DefaultPath, FString& OutFolderName);
    
    UFUNCTION(BlueprintCallable)
    static bool OpenFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& DefaultFile, const FString& FileTypes, TEnumAsByte<EEasyFileDialogFlags> Flags, TArray<FString>& OutFilenames);
    
};

