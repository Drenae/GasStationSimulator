#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=EditableText -FallbackName=EditableText
#include "DlFmFilteredEditableText.generated.h"

UCLASS(Blueprintable)
class DLFILEMANAGER_API UDlFmFilteredEditableText : public UEditableText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEditableText::FOnEditableTextCommittedEvent OnFilteredTextCommitted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GapTime;
    
    UDlFmFilteredEditableText();

private:
    UFUNCTION(BlueprintCallable)
    void OnFilteredTextCommitted_InternalHandle(const FText& TextVal, TEnumAsByte<ETextCommit::Type> CommitMethodVal);
    
};

