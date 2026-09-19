#pragma once
#include "CoreMinimal.h"
#include "EDLCName.h"
#include "EVIPState.h"
#include "VIPDestinationPoints.h"
#include "SavedVIPData.generated.h"

USTRUCT(BlueprintType)
struct FSavedVIPData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentVIPTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDLCName CurrentDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVIPState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVIPDestinationPoints> MapPoints;
    
    GSS2_API FSavedVIPData();
};

