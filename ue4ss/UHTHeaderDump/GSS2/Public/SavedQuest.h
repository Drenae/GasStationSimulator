#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SavedQuest.generated.h"

class UGSSQuest;

USTRUCT(BlueprintType)
struct FSavedQuest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGSSQuest> GSSQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxProgress;
    
    GSS2_API FSavedQuest();
};

