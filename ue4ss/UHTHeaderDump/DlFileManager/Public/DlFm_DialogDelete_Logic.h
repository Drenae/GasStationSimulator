#pragma once
#include "CoreMinimal.h"
#include "DlFmDialog_Base_Logic.h"
#include "DlFm_DialogDelete_Logic.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DLFILEMANAGER_API UDlFm_DialogDelete_Logic : public UDlFmDialog_Base_Logic {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_DeleteInfo;
    
public:
    UDlFm_DialogDelete_Logic();

};

