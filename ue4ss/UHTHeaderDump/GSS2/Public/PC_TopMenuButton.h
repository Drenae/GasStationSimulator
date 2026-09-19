#pragma once
#include "CoreMinimal.h"
#include "GSSInnerWidget.h"
#include "OnClickedEventDelegate.h"
#include "PC_TopMenuButton.generated.h"

class UDA_MainPCButton;
class UGSSButton;
class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UPC_TopMenuButton : public UGSSInnerWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDA_MainPCButton* ButtonsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSSButton* Menu_Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TabName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Icon_IMG;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClickedEvent OnButtonClicked;
    
    UPC_TopMenuButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSelectedButton(bool bIsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHovered(bool bIsHovered);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonsData(const UDA_MainPCButton* InData);
    
    UFUNCTION(BlueprintCallable)
    void CustomOnClicked();
    
    UFUNCTION(BlueprintCallable)
    void CheckForCreateRedDot();
    
};

