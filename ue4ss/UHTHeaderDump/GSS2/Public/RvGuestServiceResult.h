#pragma once
#include "CoreMinimal.h"
#include "GSSBaseWidget.h"
#include "RvGuestServiceResult.generated.h"

class URvMinigameWidget;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API URvGuestServiceResult : public UGSSBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URvMinigameWidget* MinigameWidgetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    URvGuestServiceResult();

};

