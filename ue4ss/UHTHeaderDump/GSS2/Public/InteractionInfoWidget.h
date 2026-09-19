#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "Action.h"
#include "GSSBaseWidget.h"
#include "InteractionInfoWidget.generated.h"

class UImage;
class UKeyBindedAction;
class UTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UInteractionInfoWidget : public UGSSBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PREFIX_TXT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ButtonTxt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKeyBindedAction* KeyBindedAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SOFIX_TXT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ActionIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* GamePadIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ProgressBar;
    
    UInteractionInfoWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateInfo(const FAction& InteractionStruct);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetImageVisibility(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProgressBarStartDisplay(float InteractionTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProgressBarEndDisplay(bool InteractionSuccesfull);
    
};

