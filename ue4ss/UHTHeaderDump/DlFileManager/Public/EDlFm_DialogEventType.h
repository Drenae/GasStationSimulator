#pragma once
#include "CoreMinimal.h"
#include "EDlFm_DialogEventType.generated.h"

UENUM(BlueprintType)
enum class EDlFm_DialogEventType : uint8 {
    Click_Close,
    Click_Cancel,
    Click_OK,
    Click_Yes,
    Click_YesForAll,
    Click_No,
    Click_NoForAll,
    Click_SelectNewerModified = 50,
    Click_SelectNewerModified_ForAll,
    Click_SelectLarger,
    Click_SelectLarger_ForAll,
};

