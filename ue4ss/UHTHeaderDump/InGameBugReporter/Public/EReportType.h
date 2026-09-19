#pragma once
#include "CoreMinimal.h"
#include "EReportType.generated.h"

UENUM(BlueprintType)
enum class EReportType : uint8 {
    Issue,
    Idea,
    Question,
    Feedback,
    Other,
};

