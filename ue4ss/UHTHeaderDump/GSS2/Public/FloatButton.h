#pragma once
#include "CoreMinimal.h"
#include "GSSButton.h"
#include "OnButtonClickedFloatDelegate.h"
#include "FloatButton.generated.h"

UCLASS(Blueprintable)
class GSS2_API UFloatButton : public UGSSButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonClickedFloat OnClickedReferenced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UFloatButton();

};

