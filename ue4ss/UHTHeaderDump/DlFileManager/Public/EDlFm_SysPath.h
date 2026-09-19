#pragma once
#include "CoreMinimal.h"
#include "EDlFm_SysPath.generated.h"

UENUM(BlueprintType)
enum class EDlFm_SysPath : uint8 {
    Custom,
    UE_RootDir,
    UE_ProjectDir,
    UE_ProjectUserDir,
    UE_ProjectContentDir,
    UE_ProjectConfigDir,
    UE_ProjectSavedDir,
    UE_ProjectIntermediateDir,
    UE_ShaderWorkingDir,
    UE_ProjectPluginsDir,
    UE_ProjectModsDir,
    Desktop,
    Downloads,
};

