#pragma once
#include "CoreMinimal.h"
#include "DlFmDialog_Base_Logic.h"
#include "DlFm_DialogNewItem_Logic.generated.h"

class UEditableText;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class DLFILEMANAGER_API UDlFm_DialogNewItem_Logic : public UDlFmDialog_Base_Logic {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* Text_NewName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* WShow_IllegalNameWarning;
    
public:
    UDlFm_DialogNewItem_Logic();

};

