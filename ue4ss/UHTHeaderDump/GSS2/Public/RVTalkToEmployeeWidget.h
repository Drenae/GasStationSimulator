#pragma once
#include "CoreMinimal.h"
#include "GSSBaseWidget.h"
#include "RVTalkToEmployeeWidget.generated.h"

class ARVCampEmployee;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API URVTalkToEmployeeWidget : public UGSSBaseWidget {
    GENERATED_BODY()
public:
    URVTalkToEmployeeWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitWidget(ARVCampEmployee* Employee);
    
};

