#pragma once
#include "CoreMinimal.h"
#include "EBaseWidgetFocusType.generated.h"

UENUM(BlueprintType)
enum class EBaseWidgetFocusType : uint8 {
    Focused,
    NotFocused,
    Any,
    MAX,
};

