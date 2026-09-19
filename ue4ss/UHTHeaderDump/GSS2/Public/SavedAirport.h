#pragma once
#include "CoreMinimal.h"
#include "SavedAirportScheduleManager.h"
#include "SavedCurrentStripSequence.h"
#include "SavedAirport.generated.h"

USTRUCT(BlueprintType)
struct FSavedAirport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AirportLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedCurrentStripSequence SavedCurrentMSSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedCurrentStripSequence SavedCurrentTSSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedAirportScheduleManager SavedAirportScheduleManager;
    
    GSS2_API FSavedAirport();
};

