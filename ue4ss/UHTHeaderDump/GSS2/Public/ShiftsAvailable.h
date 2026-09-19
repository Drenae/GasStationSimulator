#pragma once
#include "CoreMinimal.h"
#include "EShiftType.h"
#include "ShiftsAvailable.generated.h"

USTRUCT(BlueprintType)
struct FShiftsAvailable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShiftType ShiftEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartShiftHour;
    
    GSS2_API FShiftsAvailable();
};

