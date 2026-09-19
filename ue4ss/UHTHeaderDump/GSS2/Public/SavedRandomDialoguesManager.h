#pragma once
#include "CoreMinimal.h"
#include "JoeOrderInfo.h"
#include "SavedRandomDialoguesManager.generated.h"

USTRUCT(BlueprintType)
struct FSavedRandomDialoguesManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRandomCallsManagerActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsJoeMuted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfBlueprintLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJoeOrderInfo CurrentJoeOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTradeCompleted;
    
    GSS2_API FSavedRandomDialoguesManager();
};

