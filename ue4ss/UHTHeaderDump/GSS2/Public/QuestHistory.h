#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TimeStruct.h"
#include "QuestHistory.generated.h"

class UGSSMail;

USTRUCT(BlueprintType)
struct GSS2_API FQuestHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGSSMail> Mail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct TimeHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Opened;
    
    FQuestHistory();
};

