#pragma once
#include "CoreMinimal.h"
#include "EFileSDKFileType.generated.h"

UENUM(BlueprintType)
enum class EFileSDKFileType : uint8 {
    File,
    Directory,
};

