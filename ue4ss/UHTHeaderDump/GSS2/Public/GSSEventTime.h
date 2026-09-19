#pragma once
#include "CoreMinimal.h"
#include "EventProgress.h"
#include "Templates/SubclassOf.h"
#include "TimeStruct.h"
#include "GSSEventTime.generated.h"

class UGSSEvent;

USTRUCT(BlueprintType)
struct GSS2_API FGSSEventTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGSSEvent> GSSEventClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEventEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct CurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct MaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventProgress> EventsProgress;
    
    FGSSEventTime();
};

