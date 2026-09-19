#pragma once
#include "CoreMinimal.h"
#include "ESwitchState.h"
#include "SavedSwitch.generated.h"

USTRUCT(BlueprintType)
struct FSavedSwitch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PathName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwitchState SwitchState;
    
    GSS2_API FSavedSwitch();
};

