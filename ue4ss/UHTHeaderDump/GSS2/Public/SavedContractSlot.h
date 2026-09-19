#pragma once
#include "CoreMinimal.h"
#include "EState.h"
#include "SavedCustomizationContract.h"
#include "SavedContractSlot.generated.h"

USTRUCT(BlueprintType)
struct FSavedContractSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EState SavedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedCustomizationContract SavedContract;
    
    GSS2_API FSavedContractSlot();
};

