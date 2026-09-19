#pragma once
#include "CoreMinimal.h"
#include "SavedJoeCrashManager.generated.h"

USTRUCT(BlueprintType)
struct FSavedJoeCrashManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HoursPassed;
    
    GSS2_API FSavedJoeCrashManager();
};

