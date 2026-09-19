#pragma once
#include "CoreMinimal.h"
#include "SavedSpawnedWeb.generated.h"

USTRUCT(BlueprintType)
struct FSavedSpawnedWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOccupiedSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    GSS2_API FSavedSpawnedWeb();
};

