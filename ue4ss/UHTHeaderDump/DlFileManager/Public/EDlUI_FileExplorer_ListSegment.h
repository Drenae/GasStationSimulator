#pragma once
#include "CoreMinimal.h"
#include "EDlUI_FileExplorer_ListSegment.generated.h"

UENUM(BlueprintType)
enum class EDlUI_FileExplorer_ListSegment : uint8 {
    Directory,
    File,
    All_Num,
};

