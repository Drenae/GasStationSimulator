#pragma once
#include "CoreMinimal.h"
#include "GSSInnerWidget.h"
#include "QuestHistory.h"
#include "PC_Mail_Position.generated.h"

class UImage;
class URefButton;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UPC_Mail_Position : public UGSSInnerWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestHistory MailStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TIME_TXT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TXT_Day;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* NAME_TXT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TIME_TXT_MINUTES;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Visual_Respond_Open;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Visual_Respond_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URefButton* Action_ButtonRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPC_Mail_Position();

    UFUNCTION(BlueprintCallable)
    void SetData(FQuestHistory InMailStruct, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void RefreshImage();
    
    UFUNCTION(BlueprintCallable)
    void InitializeData();
    
};

