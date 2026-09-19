#pragma once
#include "CoreMinimal.h"
#include "EFileSDKEncodingOptions.generated.h"

UENUM(BlueprintType)
enum class EFileSDKEncodingOptions : uint8 {
    AutoDetect,
    ForceAnsi,
    ForceUnicode,
    ForceUTF8,
    ForceUTF8WithoutBOM,
};

