#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "DlFmDialog_Base_Logic.generated.h"

class UDlFmButton;

UCLASS(Blueprintable, EditInlineNew)
class DLFILEMANAGER_API UDlFmDialog_Base_Logic : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoClose;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_Yes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_No;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_YesForAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_NoForAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_SelectNewerModified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_SelectNewerModified_ForAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_SelectLarger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_SelectLarger_ForAll;
    
public:
    UDlFmDialog_Base_Logic();

private:
    UFUNCTION(BlueprintCallable)
    void OnInternalClick_YesForAll();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClick_Yes();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClick_SelectNewerModified_ForAll();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClick_SelectNewerModified();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClick_SelectLarger_ForAll();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClick_SelectLarger();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClick_NoForAll();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClick_No();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClick_Close();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClick_Cancel();
    
};

